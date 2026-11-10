/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00a75580; name: FUN_00a75580
 */


undefined8
FUN_00a75580(undefined8 param_1,uint *param_2,uint *param_3,int param_4,undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 local_98;
  char *pcStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [16];
  undefined1 auStack_70 [16];
  
  uVar1 = FUN_012b40f0(param_5);
  uVar5 = uVar1;
  if ((int)uVar1 < 0) {
    uVar5 = uVar1 + 1;
  }
  uVar4 = (int)uVar5 >> 1;
  FUN_012b4190(auStack_80,param_5,(long)((ulong)uVar5 << 0x20) >> 0x21);
  local_88 = 6;
  local_98 = 0xf3b47097d1e17785;
  pcStack_90 = "monsno";
  FUN_012b4250(auStack_70,auStack_80,&local_98);
  iVar2 = FUN_012b4420(auStack_70,0);
  if (iVar2 < param_4) {
    uVar5 = uVar4;
    uVar6 = uVar1;
LAB_00a7563c:
    uVar1 = uVar6 - uVar5;
    uVar4 = uVar1;
    if ((int)uVar1 < 0) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar5 + ((int)uVar4 >> 1);
    FUN_012b4190(auStack_80,param_5,(long)(int)uVar4);
    local_88 = 6;
    local_98 = 0xf3b47097d1e17785;
    pcStack_90 = "monsno";
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar2 = FUN_012b4420(auStack_70,0);
    if (iVar2 < param_4) {
      uVar5 = uVar4;
    }
    else {
      uVar3 = uVar6;
      uVar6 = uVar4;
      if (iVar2 <= param_4) goto LAB_00a75704;
    }
    uVar1 = uVar6 - uVar5;
    uVar4 = uVar1;
    if ((int)uVar1 < 0) {
      uVar4 = uVar1 + 1;
    }
    uVar4 = uVar5 + ((int)uVar4 >> 1);
    FUN_012b4190(auStack_80,param_5,(long)(int)uVar4);
    local_88 = 6;
    local_98 = 0xf3b47097d1e17785;
    pcStack_90 = "monsno";
    FUN_012b4250(auStack_70,auStack_80,&local_98);
    iVar2 = FUN_012b4420(auStack_70,0);
    if (iVar2 < param_4) {
      uVar5 = uVar4;
      uVar4 = uVar6;
      goto LAB_00a75724;
    }
    uVar3 = uVar6;
    if (param_4 < iVar2) goto LAB_00a75724;
  }
  else {
    uVar5 = 0;
    uVar3 = uVar1;
    uVar6 = uVar4;
    if (param_4 < iVar2) goto LAB_00a7563c;
  }
LAB_00a75704:
  uVar6 = uVar1 + 3;
  if (-1 < (int)uVar1) {
    uVar6 = uVar1;
  }
  uVar5 = uVar5 + ((int)uVar6 >> 2);
  iVar2 = uVar3 - uVar4;
  if (iVar2 < 0) {
    iVar2 = iVar2 + 1;
  }
  uVar4 = uVar4 + (iVar2 >> 1);
LAB_00a75724:
  *param_2 = uVar5;
  *param_3 = uVar4;
  return 1;
}


