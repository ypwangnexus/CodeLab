{
  'targets': [
    { 
      'target_name': 'hello_world',
      'type': 'executable',
      'sources': [
        'src/hello_world.cc',
      ],
    },
    {
      'target_name': 'use_base',
      'type': 'executable',
      'include_dirs': [
        '..'
      ],
      'dependencies': [
        '../src/base/base.gyp:base',
      ],
      'sources': [
        'src/use_base.cc',
      ],
    },
  ],
}
