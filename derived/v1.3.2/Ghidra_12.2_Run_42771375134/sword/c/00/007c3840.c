/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007c3840; name: FUN_007c3840
 */


void FUN_007c3840(long param_1)

{
  undefined *puVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 local_28;
  undefined4 local_24;
  
  puVar1 = PTR_DAT_02716b80;
  if (((*(long *)PTR_DAT_02716b80 != 0) &&
      ((iVar3 = FUN_007c2bc0(), iVar3 == 0 ||
       (iVar3 = FUN_007c2bc0(*(undefined8 *)puVar1), iVar3 == 1)))) &&
     ((cVar2 = FUN_007a9cb0(), cVar2 == '\0' || (cVar2 = FUN_007a9cb0(), cVar2 == '\x03')))) {
    FUN_007a9cc0(0);
    if (*(long *)puVar1 == 0) {
      *(undefined8 *)(param_1 + 0x354) = 0;
    }
    else {
      uVar4 = FUN_007c2f30();
      *(ulong *)(param_1 + 0x354) = uVar4;
      if ((((uVar4 & 0xff) != 0) && (uVar4 = FUN_007c3b60(param_1), (uVar4 & 1) != 0)) &&
         ((*(char *)(param_1 + 0x354) == '\0' ||
          ((1 < *(uint *)(param_1 + 0x358) || (uVar4 = FUN_007c3c70(param_1), (uVar4 & 1) != 0))))))
      {
        uVar5 = 1;
        if (*(long *)puVar1 != 0) {
          local_28 = 1;
          FUN_007c2c00(*(long *)puVar1,&local_28);
        }
        goto LAB_007c3938;
      }
    }
  }
  FUN_007c3a50(param_1);
  FUN_007a9cc0(1);
  if (*(long *)puVar1 != 0) {
    local_24 = 3;
    FUN_007c2c00(*(long *)puVar1,&local_24);
  }
  uVar5 = 0;
LAB_007c3938:
  *(undefined4 *)(param_1 + 0x350) = uVar5;
  return;
}


