/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0030be90; name: FUN_0030be90
 */


void FUN_0030be90(long *param_1,float *param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  float fVar3;
  long *plVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  
  *(undefined4 *)(param_1 + 1) = 0x30105;
  param_1[4] = 0;
  param_1[0xc] = 0;
  puVar1 = PTR_DAT_02712210 + 0x10;
  puVar2 = PTR_DAT_02712210 + 0x210;
  param_1[2] = 0;
  param_1[3] = (long)puVar2;
  *param_1 = (long)puVar1;
  *(undefined2 *)(param_1 + 0xe) = 0x101;
  plVar4 = (long *)FUN_00400d30();
  lVar5 = (**(code **)(*plVar4 + 0x10))
                    (plVar4,0x180,"NonTrackedAlloc",
                     "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/PhysXExtensions/src/ExtD6Joint.cpp"
                     ,0x47);
  param_1[0xd] = lVar5;
  FUN_0030c020(param_1,lVar5,param_3,param_4,param_5,param_6);
  *(undefined8 *)(lVar5 + 0x88) = 0x3fc90fdb3dcccccd;
  *(undefined8 *)(lVar5 + 0x90) = 0xbfc90fdb;
  *(undefined8 *)(lVar5 + 0x58) = 0;
  *(undefined8 *)(lVar5 + 0x98) = 0x3f000000;
  *(undefined8 *)(lVar5 + 0xa0) = 0x3dcccccd00000000;
  *(undefined8 *)(lVar5 + 0x48) = 0;
  *(undefined8 *)(lVar5 + 0x50) = 0;
  *(undefined8 *)(lVar5 + 0xa8) = 0x3fc90fdb3fc90fdb;
  fVar6 = DAT_01d4c4d4;
  *(undefined8 *)(lVar5 + 0x78) = 0x3f00000000000000;
  *(undefined8 *)(lVar5 + 0x80) = 0;
  fVar7 = *param_2;
  *(undefined8 *)(lVar5 + 0x60) = 0;
  *(undefined8 *)(lVar5 + 0x68) = 0;
  fVar3 = DAT_01d4c1cc;
  *(undefined4 *)(lVar5 + 0x74) = 0x7f7fffff;
  *(float *)(lVar5 + 0x70) = fVar7 * fVar6;
  fVar6 = *param_2;
  *(undefined8 *)(lVar5 + 0xb0) = 0;
  *(undefined8 *)(lVar5 + 0xb8) = 0x7f7fffff;
  *(undefined4 *)(lVar5 + 0x140) = 0;
  *(undefined8 *)(lVar5 + 0xc0) = 0;
  *(undefined8 *)(lVar5 + 200) = 0x7f7fffff;
  *(undefined8 *)(lVar5 + 0xd0) = 0;
  *(undefined8 *)(lVar5 + 0xd8) = 0x7f7fffff;
  *(float *)(lVar5 + 0x174) = fVar6 * fVar3;
  *(undefined8 *)(lVar5 + 0xe0) = 0;
  *(undefined8 *)(lVar5 + 0xe8) = 0x7f7fffff;
  *(undefined8 *)(lVar5 + 0xf0) = 0;
  *(undefined8 *)(lVar5 + 0xf8) = 0x7f7fffff;
  *(undefined8 *)(lVar5 + 0x100) = 0;
  *(undefined8 *)(lVar5 + 0x108) = 0x7f7fffff;
  *(undefined8 *)(lVar5 + 0x110) = 0;
  *(undefined8 *)(lVar5 + 0x118) = 0x3f80000000000000;
  *(undefined8 *)(lVar5 + 0x178) = 0x40490fdb501502f9;
  *(undefined8 *)(lVar5 + 0x120) = 0;
  *(undefined8 *)(lVar5 + 0x128) = 0;
  *(undefined8 *)(lVar5 + 0x130) = 0;
  *(undefined8 *)(lVar5 + 0x138) = 0;
  return;
}


