/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e4060; name: FUN_004e4060
 */


undefined8 FUN_004e4060(int *param_1)

{
  float fVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  void *__s;
  undefined8 uVar8;
  float fVar9;
  
  if (*param_1 == -1) {
    uVar5 = param_1[1];
    if (uVar5 < 0x41) {
      uVar5 = 0x1000000;
    }
    uVar6 = FUN_00405500(0,uVar5,0x40,1,0);
    uVar5 = (uint)uVar6;
    *(uint *)PTR_DAT_02713640 = uVar5;
  }
  else {
    uVar5 = *(uint *)PTR_DAT_02713640;
    uVar6 = (ulong)uVar5;
  }
  if (uVar5 == 0xffffffff) {
    return 0x34;
  }
  puVar7 = (undefined8 *)FUN_00404690(uVar6,0x100);
  if (puVar7 == (undefined8 *)0x0) {
    *(undefined8 *)PTR_DAT_02713620 = 0;
    return 0x34;
  }
  *puVar7 = 0x400000ffffffff;
  puVar7[1] = &DAT_b00000008;
  puVar7[2] = 0x41f0000040000000;
  FUN_004ed790(puVar7 + 3);
  nn::os::InitializeMutex((MutexType *)(puVar7 + 0x17),true,0);
  puVar7[0x1c] = 0;
  puVar7[0x1d] = 0;
  puVar7[0x1e] = 0xffffffffffffffff;
  *(undefined1 *)(puVar7 + 0x1f) = 1;
  puVar3 = PTR_DAT_02713620;
  *(undefined8 **)PTR_DAT_02713620 = puVar7;
  puVar7[2] = *(undefined8 *)(param_1 + 4);
  puVar7[1] = *(undefined8 *)(param_1 + 2);
  *puVar7 = *(undefined8 *)param_1;
  iVar4 = FUN_004eda10(puVar7 + 3);
  puVar2 = PTR_DAT_02712de0;
  if (((((((iVar4 == 1) &&
          (iVar4 = FUN_004e44b0(*(undefined8 *)PTR_DAT_02712de0,PTR_LAB_02713658,PTR_LAB_02713660,0)
          , iVar4 == 1)) &&
         (iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_02713668,0,1), iVar4 == 1)) &&
        ((iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_02713670,0,2), iVar4 == 1 &&
         (iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_02713678,0,3), iVar4 == 1)))) &&
       (((iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_02713680,PTR_LAB_02713688,4),
         iVar4 == 1 &&
         ((iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_02713690,0,5), iVar4 == 1 &&
          (iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_02713698,0,6), iVar4 == 1)))) &&
        (iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136a0,0,7), iVar4 == 1)))) &&
      ((((iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136a8,0,8), iVar4 == 1 &&
         (iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136b0,0,9), iVar4 == 1)) &&
        (iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136b8,PTR_LAB_027136c0,10),
        iVar4 == 1)) &&
       (((iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136c8,0,0xb), iVar4 == 1 &&
         (iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136d0,PTR_LAB_027136d8,0xc),
         iVar4 == 1)) &&
        ((iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136e0,0,0xd), iVar4 == 1 &&
         ((iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136e8,0,0xe), iVar4 == 1 &&
          (iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_027136f0,PTR_LAB_027136f8,0xf),
          iVar4 == 1)))))))))) &&
     ((iVar4 = FUN_004e44b0(*(undefined8 *)puVar2,PTR_LAB_02713700,0,0x10),
      puVar2 = PTR_DAT_02713650, iVar4 == 1 && (*(long *)PTR_DAT_02713650 == 0)))) {
    __s = (void *)FUN_00404690(*(undefined4 *)PTR_DAT_02713640,0x48);
    *(void **)puVar2 = __s;
    if (__s != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      memset(__s,0,0x48);
    }
    iVar4 = FUN_00432480(PTR_LAB_02713648,8,0);
    if ((iVar4 == 1) &&
       (uVar8 = FUN_00432480(PTR_FUN_02713708,0x80,0), fVar1 = DAT_01d4bf34, (int)uVar8 == 1)) {
      fVar9 = *(float *)(*(long *)puVar3 + 0x14);
      *(undefined4 *)PTR_DAT_02713710 = *(undefined4 *)(*(long *)puVar3 + 0x10);
      *(float *)PTR_DAT_02713718 = fVar9 * fVar1;
      return uVar8;
    }
  }
  FUN_004e3d80();
  return 2;
}


