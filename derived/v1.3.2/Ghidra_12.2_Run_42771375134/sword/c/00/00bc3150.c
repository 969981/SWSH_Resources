/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bc3150; name: FUN_00bc3150
 */


void FUN_00bc3150(long param_1)

{
  undefined8 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 local_28;
  
  FUN_00ffdc80(param_1 + 0x100,"poke_panel");
  local_28 = FUN_016b8190();
  uVar3 = (uint)((ulong)local_28 >> 0x20);
  if (1 < uVar3) {
    uVar2 = (uint)local_28;
    if (uVar2 == 0) {
      if (5 < (int)(uVar3 - 2)) {
        return;
      }
      uVar1 = 1;
    }
    else {
      if (4 < uVar3 - 2) {
        return;
      }
      uVar1 = 0;
    }
    FUN_00bc3280(param_1,uVar1,0);
    *(uint *)(param_1 + 0x628) = uVar2 & 0xfff | (uVar2 & 0xfff) << 0xc | 0x1000000;
    *(uint *)(param_1 + 0x62c) = uVar3 & 0xfff | (uVar3 & 0xfff) << 0xc | 0x1000000;
    *(undefined1 *)(param_1 + 0x630) = 1;
    FUN_00bc41f0(param_1);
    switch(*(undefined4 *)(param_1 + 0x5cc)) {
    case 0:
      FUN_00bbba00(param_1,&local_28);
      return;
    case 1:
      FUN_00bbc160(param_1,&local_28);
      return;
    case 2:
    case 4:
      FUN_00bbc7e0(param_1,&local_28);
      break;
    default:
      FUN_00bbcd10(param_1,&local_28);
      return;
    }
  }
  return;
}


