/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0040cb90; name: FUN_0040cb90
 */


long FUN_0040cb90(long param_1,undefined4 param_2,undefined1 *param_3,undefined4 *param_4,
                 long *param_5)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_190 [264];
  long local_88;
  char local_68;
  
  lVar4 = *(long *)(param_1 + 8);
  lVar3 = *(long *)(*(long *)(param_1 + 0x10) + 0x68);
  FUN_00418860(auStack_190,*(long *)(param_1 + 0x10),0);
  if (local_88 == 0) {
    lVar3 = 0;
    *param_3 = 0;
    goto LAB_0040cd20;
  }
  *param_3 = 1;
  lVar5 = *(long *)(local_88 + 0x18);
  lVar4 = lVar4 - lVar3;
  *param_4 = 0;
  if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x5a) & 1) == 0)) {
    iVar1 = 3;
LAB_0040cc04:
    if (local_68 != '\0') {
LAB_0040cc0c:
      lVar3 = 0;
      *param_3 = iVar1 != 3;
      goto LAB_0040cd20;
    }
    (**(code **)(**(long **)(param_1 + 0x10) + 0x98))(*(long **)(param_1 + 0x10),auStack_190,0);
    if (*(long *)(local_88 + 0x18) == 0) {
      lVar3 = 0;
      *param_3 = iVar1 != 3;
      if ((lVar5 == 0) || (iVar1 != 1)) goto LAB_0040cd20;
      if ((*(byte *)(lVar5 + 0x5a) & 1) != 0) {
LAB_0040ccf8:
        lVar5 = FUN_00418980(auStack_190);
        lVar3 = lVar5 - lVar4;
        *param_5 = lVar5;
        goto LAB_0040cd20;
      }
    }
    else {
      if ((iVar1 == 3) && ((*(byte *)(*(long *)(local_88 + 0x18) + 0x5a) & 1) == 0))
      goto LAB_0040cc0c;
      *param_4 = 1;
      iVar2 = FUN_0040cd50(param_1,auStack_190,param_2,param_5);
      *param_3 = iVar1 != 3 || iVar2 != 3;
      if (iVar2 - 2U < 2) {
        if (iVar1 != 3) goto LAB_0040ccf8;
      }
      else if (iVar2 == 0) goto LAB_0040cd10;
    }
  }
  else {
    iVar1 = FUN_0040cd50(param_1,auStack_190,param_2,param_5);
    if (iVar1 != 2) {
      if (iVar1 != 0) goto LAB_0040cc04;
LAB_0040cd10:
      lVar3 = *param_5 - lVar4;
      goto LAB_0040cd20;
    }
  }
  lVar3 = 0;
LAB_0040cd20:
  FUN_004188d0(auStack_190);
  return lVar3;
}


