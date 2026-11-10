/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 012e7ca0; name: FUN_012e7ca0
 */


uint FUN_012e7ca0(long param_1)

{
  uint uVar1;
  ulong uVar2;
  undefined1 local_30 [16];
  
  uVar2 = FUN_012e81b0();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    if (*(int *)(param_1 + 0x500) != 4) {
      local_30 = FUN_0130fa10(param_1);
      uVar2 = FUN_012ecf40(local_30,&DAT_0216af18);
      if ((((uVar2 & 1) == 0) && (uVar2 = FUN_012ecf40(local_30,&DAT_0216af28), (uVar2 & 1) == 0))
         && (uVar2 = FUN_012ecf40(local_30,&DAT_0216af38), (uVar2 & 1) == 0)) {
        uVar1 = FUN_012ecf40(local_30,&DAT_0216af48);
        goto LAB_012e7d1c;
      }
    }
    uVar1 = 1;
  }
LAB_012e7d1c:
  return uVar1 & 1;
}


