/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c460a0; name: FUN_00c460a0
 */


void FUN_00c460a0(undefined1 *param_1,long param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  lVar6 = FUN_00c1d960();
  if (((lVar6 == 0) || (lVar6 = FUN_00bdb9f0(), lVar6 == 0)) || (*(char *)(param_2 + 200) == '\0'))
  {
    *param_1 = 0;
  }
  else {
    uVar1 = *(undefined2 *)(param_2 + 0x138);
    uVar2 = FUN_00be27d0(lVar6,uVar1);
    iVar3 = FUN_00be2600(lVar6,uVar1);
    uVar4 = FUN_00be2750(lVar6,uVar1);
    if (*(char *)(param_2 + 0xb8) == '\0') {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_00be1770(*(undefined8 *)(param_2 + 0xc0));
    }
    *(undefined4 *)(param_1 + 4) = uVar2;
    *(int *)(param_1 + 8) = iVar3 + 1;
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    *param_1 = 1;
  }
  return;
}


