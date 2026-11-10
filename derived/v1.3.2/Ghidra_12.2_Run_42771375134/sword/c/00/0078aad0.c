/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0078aad0; name: FUN_0078aad0
 */


void FUN_0078aad0(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x78);
  for (lVar1 = *(long *)(param_1 + 0x70); lVar1 != lVar2; lVar1 = lVar1 + 0x60) {
    if (*(long *)(lVar1 + 8) != 0) {
      FUN_00700830(*(long *)(lVar1 + 8),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x10) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x10),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x18) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x18),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x20) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x20),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x28) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x28),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x30) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x30),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x38) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x38),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x40) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x40),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x48) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x48),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x50) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x50),param_2 & 1,param_3);
    }
    if (*(long *)(lVar1 + 0x58) != 0) {
      FUN_00700830(*(long *)(lVar1 + 0x58),param_2 & 1,param_3);
    }
  }
  return;
}


