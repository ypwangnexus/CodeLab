#include <string>

#include "base/command_line.h"
#include "base/files/file_path.h"
#include "base/logging.h"

int main(int argc, char *argv[]) {
  CHECK(CommandLine::Init(argc, argv));
  CommandLine* command_line = CommandLine::ForCurrentProcess();
  std::string greeting = command_line->GetSwitchValueASCII("greeting");
  std::string name = command_line->GetSwitchValueASCII("name");
  if (greeting.empty())
    greeting = "Hello";
  if (name.empty())
    name = "World";

  LOG(INFO) << greeting << ", " << name;

  base::FilePath program = command_line->GetProgram();
  LOG(INFO) << program.value();
  LOG(INFO) << command_line->GetCommandLineString();
  LOG(INFO) << command_line->GetArgumentsString();
  return 0;
}
