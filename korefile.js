let fs = require('fs');
let path = require('path');
let project = new Project('TestAnim');
project.addDefine('HXCPP_API_LEVEL=332');
project.targetOptions = {"html5":{},"flash":{},"android":{},"ios":{}};
project.setDebugDir('build_FarmDefence/windows');
await project.addProject('build_FarmDefence/windows-build');
await project.addProject('C:/Armory/armsdk/Kha');
if (fs.existsSync(path.join('C:/Armory/armsdk/armory', 'korefile.js'))) {
	await project.addProject('C:/Armory/armsdk/armory');
}
if (fs.existsSync(path.join('C:/Armory/armsdk/iron', 'korefile.js'))) {
	await project.addProject('C:/Armory/armsdk/iron');
}
resolve(project);
