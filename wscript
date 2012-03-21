def options(opt):
	opt.load('g++')

def configure(conf):
	conf.load('g++')

def build(bld):
	bld.program(source='DynamicProg/main.cpp', target='DynamicProg/main')
	bld.program(source='Graph/main.cpp', target='Graph/main')
	bld.program(source='quizes/BasicSingleListTest.cpp', target='basicsinglelisttest', includes=['srclibs'])
	bld.program(source='quizes/singlelisttest.cpp', target='singlelisttest', includes=['srclibs'])
