/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00488b30; name: FUN_00488b30
 */


undefined8 FUN_00488b30(long *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  void *pvVar7;
  ulong uVar8;
  uint uVar9;
  long *plVar10;
  undefined1 auStack_70 [48];
  
  plVar6 = (long *)FUN_004a41e0(param_1,param_2[7]);
  uVar5 = *(uint *)(param_1 + 1);
  plVar1 = (long *)(*param_1 + (ulong)uVar5 * 0x40);
  if (plVar1 != plVar6) {
    plVar10 = plVar6;
    do {
      if ((((*plVar10 != *param_2) || ((int)plVar10[1] != (int)param_2[1])) ||
          ((int)plVar10[2] != (int)param_2[2])) ||
         ((((char)plVar10[3] != (char)param_2[3] || ((char)plVar10[4] != (char)param_2[4])) ||
          (plVar10[5] != param_2[5])))) break;
      if (plVar10[7] == param_2[7]) {
        plVar10[6] = param_2[6];
        return 0;
      }
      plVar10 = plVar10 + 8;
    } while (plVar10 != plVar1);
    if (plVar1 != plVar6) {
      pvVar7 = (void *)FUN_00488cf0(param_1,(ulong)((long)plVar6 - *param_1) >> 6);
      if (pvVar7 == (void *)0x0) {
        return 0;
      }
      memcpy(pvVar7,param_2,0x30);
      *(long *)((long)pvVar7 + 0x30) = param_2[6];
      *(long *)((long)pvVar7 + 0x38) = param_2[7];
      return 1;
    }
  }
  memcpy(auStack_70,param_2,0x30);
  uVar9 = *(uint *)((long)param_1 + 0xc);
  lVar3 = param_2[6];
  lVar4 = param_2[7];
  if (uVar9 <= uVar5) {
    uVar8 = FUN_00488e20(param_1,1);
    if ((uVar8 & 1) == 0) {
      return 0;
    }
    uVar9 = *(uint *)((long)param_1 + 0xc);
  }
  if (uVar9 <= uVar5) {
    return 0;
  }
  uVar5 = *(uint *)(param_1 + 1);
  pvVar7 = (void *)(*param_1 + (ulong)uVar5 * 0x40);
  *(uint *)(param_1 + 1) = uVar5 + 1;
  if (pvVar7 == (void *)0x0) {
    return 0;
  }
  lVar2 = *param_1 + (ulong)uVar5 * 0x40;
  *(undefined4 *)(lVar2 + 8) = 0;
  *(undefined4 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x18) = 0xff;
  *(undefined1 *)(lVar2 + 0x20) = 0xff;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  memcpy(pvVar7,auStack_70,0x30);
  *(long *)(lVar2 + 0x30) = lVar3;
  *(long *)(lVar2 + 0x38) = lVar4;
  return 1;
}


