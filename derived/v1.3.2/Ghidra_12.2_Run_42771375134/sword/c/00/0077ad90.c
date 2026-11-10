/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0077ad90; name: FUN_0077ad90
 */


long * FUN_0077ad90(undefined8 param_1,int param_2,int param_3,uint param_4,uint *param_5,
                   long *param_6)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  long lVar7;
  undefined1 uVar8;
  
  uVar5 = 0;
  if (param_4 != 0) {
    uVar5 = ((param_3 + param_4) - 1) / param_4;
  }
  *param_6 = 0;
  uVar1 = uVar5 * param_4 + 0x78;
  *param_5 = uVar5 * param_4;
  if (param_2 == -1) {
    param_2 = FUN_00405500(0,uVar1,uVar1,9,param_4);
    if (param_2 == -1) {
      return (long *)0x0;
    }
    lVar7 = FUN_004048f0();
    uVar8 = 1;
  }
  else {
    iVar4 = FUN_004049c0(param_2);
    if (iVar4 != 1) {
      return (long *)0x0;
    }
    uVar5 = FUN_00404660(param_2);
    if ((uVar5 >> 3 & 1) == 0) {
      lVar7 = FUN_00404690(param_2,uVar1);
      uVar8 = 0;
    }
    else {
      uVar5 = FUN_004049a0(param_2);
      if (uVar5 < uVar1) {
        return (long *)0x0;
      }
      lVar7 = FUN_004048f0(param_2);
      uVar8 = 0;
    }
  }
  if (lVar7 == 0) {
    return (long *)0x0;
  }
  uVar6 = FUN_0042ef70(param_1);
  plVar3 = (long *)(lVar7 + (ulong)*param_5);
  *plVar3 = (long)(PTR_DAT_027161b8 + 0x10);
  plVar3[1] = 0;
  FUN_0077bcf0(plVar3 + 2);
  *(undefined4 *)(plVar3 + 8) = uVar6;
  *(int *)((long)plVar3 + 0x44) = param_3;
  *(int *)(plVar3 + 9) = param_2;
  plVar3[10] = lVar7;
  puVar2 = PTR_DAT_027161c0 + 0x10;
  *(undefined1 *)(plVar3 + 0xb) = uVar8;
  plVar3[0xc] = 0;
  *(undefined4 *)(plVar3 + 0xd) = 0;
  *plVar3 = (long)puVar2;
  *param_6 = lVar7;
  return plVar3;
}


