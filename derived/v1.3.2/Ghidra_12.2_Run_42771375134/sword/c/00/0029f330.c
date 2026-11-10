/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0029f330; name: FUN_0029f330
 */


uint FUN_0029f330(undefined2 *param_1,undefined8 *param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined1 local_28 [4];
  undefined1 auStack_24 [4];
  
  uVar4 = FUN_002af7f0(0x53,0x55,0x50,0x4d,auStack_24,local_28,param_2);
  if (((uVar4 & 1) == 0) ||
     (uVar4 = FUN_002af7f0(0x47,0x41,0x55,0x53,auStack_24,local_28,param_2), (uVar4 & 1) == 0)) {
    uVar3 = 0;
  }
  else {
    uVar1 = FUN_002af410(local_28[0],param_2);
    *param_1 = uVar1;
    uVar2 = FUN_002af410(local_28[0],param_2);
    param_1[1] = uVar2;
    if (uVar2 == 0) {
      uVar6 = 0;
      uVar2 = 0;
    }
    else {
      plVar5 = (long *)FUN_00400d30();
      uVar6 = (**(code **)(*plVar5 + 0x10))
                        (plVar5,(uint)uVar2 << 1,"NonTrackedAlloc",
                         "C:/gitlab-runner/builds/ba119cc0/0/research_and_development/physx/PhysX/PhysX_3.4/Source/GeomUtils/src/convex/GuBigConvexData.cpp"
                         ,0xa1);
      uVar2 = param_1[1];
    }
    *(undefined8 *)(param_1 + 4) = uVar6;
    (**(code **)*param_2)(param_2,uVar6,(uint)uVar2 << 1);
    uVar3 = FUN_0029f180(param_1,param_2);
  }
  return uVar3 & 1;
}


