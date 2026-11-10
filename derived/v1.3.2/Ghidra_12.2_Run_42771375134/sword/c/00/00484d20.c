/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00484d20; name: FUN_00484d20
 */


void FUN_00484d20(long *param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulong uVar8;
  int iVar9;
  size_t __n;
  undefined4 local_54;
  
  puVar4 = PTR_DAT_02712a90;
  local_54 = *(undefined4 *)(PTR_DAT_02712b40 + (ulong)param_2 * 4);
  pbVar6 = (byte *)param_1[0x12];
  if (pbVar6 != (byte *)0x0) {
    uVar8 = 0;
    pbVar7 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
    do {
      if ((uint)pbVar6[uVar8 + 1] == (param_2 & 0xff)) goto LAB_00484d98;
      uVar8 = uVar8 + 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar8 < *pbVar6);
  }
  pbVar7 = (byte *)0x0;
LAB_00484d98:
  pbVar3 = (byte *)&local_54;
  if (pbVar7 != (byte *)0x0) {
    pbVar3 = pbVar7;
  }
  if (*(int *)pbVar3 == param_3) {
    return;
  }
  if (pbVar6 == (byte *)0x0) {
    __n = 0;
  }
  else {
    __n = (size_t)*pbVar6;
    uVar8 = 0;
    pbVar7 = pbVar6 + ((ulong)(*pbVar6 + 4) & 0x1fc);
    do {
      if ((uint)pbVar6[uVar8 + 1] == (param_2 & 0xff)) {
        if (pbVar7 != (byte *)0x0) goto LAB_00484e9c;
        break;
      }
      uVar8 = uVar8 + 1;
      pbVar7 = pbVar7 + 4;
    } while (uVar8 < __n);
  }
  iVar9 = (int)__n;
  uVar2 = iVar9 + 5U & 0x1fc;
  lVar1 = __n + 1;
  puVar5 = (undefined1 *)FUN_00404690(*(undefined4 *)PTR_DAT_02712a90,uVar2 + (int)lVar1 * 4);
  if (puVar5 != (undefined1 *)0x0) {
    if (param_1[0x12] != 0) {
      memcpy(puVar5 + 1,(void *)(param_1[0x12] + 1),__n);
      memcpy(puVar5 + uVar2,(void *)(param_1[0x12] + (ulong)(iVar9 + 4U & 0x1fc)),
             (ulong)(uint)(iVar9 << 2));
      FUN_00404870(*(undefined4 *)puVar4,param_1[0x12]);
    }
    pbVar7 = puVar5 + __n * 4 + (ulong)uVar2;
    puVar5[lVar1] = (char)param_2;
    *puVar5 = (char)lVar1;
    param_1[0x12] = (long)puVar5;
    if (pbVar7 != (byte *)0x0) {
LAB_00484e9c:
      *(int *)pbVar7 = param_3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00484ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x180))(param_1,0);
  return;
}


