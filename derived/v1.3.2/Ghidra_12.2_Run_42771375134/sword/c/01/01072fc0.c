/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01072fc0; name: FUN_01072fc0
 */


void FUN_01072fc0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 local_18;
  
  if (*(int *)(param_1 + 0x5d8) == 2) {
    lVar1 = FUN_0106fc20(*(undefined4 *)(param_1 + 0x5dc),
                         *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
    local_18 = *(undefined8 *)(lVar1 + 0x18);
    if ((*(long *)(param_1 + 0x2b0) == 0) ||
       (uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18), (uVar2 & 1) != 0)) {
      lVar1 = FUN_0106fc20(*(undefined4 *)(param_1 + 0x5e0),
                           *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x5d0) + 0x1f8) + 0x58));
      local_18 = *(undefined8 *)(lVar1 + 0x10);
      if ((*(long *)(param_1 + 0x2b0) == 0) ||
         (uVar2 = FUN_0167bc20(*(long *)(param_1 + 0x2b0),&local_18), (uVar2 & 1) != 0)) {
        FUN_010730f0(param_1,*(undefined4 *)(param_1 + 0x5e0));
        if ((*(int *)(*(long *)(param_1 + 0x5f0) + 0xe8) == 0) ||
           ((*(char *)(param_1 + 0x690) != '\0' && (*(int *)(param_1 + 0x5dc) == 1)))) {
          local_18 = 0xde84e9d037549cec;
          uVar3 = FUN_00ffdfb0(param_1 + 0x100,&local_18);
          FUN_016b2da0(uVar3,0);
          lVar1 = *(long *)(param_1 + 0x4c0);
        }
        else {
          local_18 = 0xde84e9d037549cec;
          uVar3 = FUN_00ffdfb0(param_1 + 0x100,&local_18);
          FUN_016b2da0(uVar3,1);
          lVar1 = *(long *)(param_1 + 0x4c0);
        }
        if (lVar1 != 0) {
          FUN_016d2080();
        }
        *(undefined4 *)(param_1 + 0x5d8) = 1;
      }
    }
  }
  return;
}


