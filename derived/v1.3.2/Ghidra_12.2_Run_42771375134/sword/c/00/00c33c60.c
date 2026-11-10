/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00c33c60; name: FUN_00c33c60
 */


undefined4 FUN_00c33c60(long param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  long local_28;
  
  if (*(long *)(param_1 + 0xf8) == 0) {
    return 0x26;
  }
  puVar5 = *(undefined8 **)(*(long *)(param_1 + 0xf8) + 0x60);
  if (puVar5 == (undefined8 *)0x0) {
    return 0x26;
  }
  (**(code **)*puVar5)(puVar5);
  uVar2 = FUN_00c1bcf0();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0x26;
  }
  else {
    uVar1 = 0xc;
    switch(*(undefined1 *)(puVar5 + 4)) {
    case 10:
      break;
    case 0xb:
      return 0xe;
    case 0xc:
      return 0x14;
    default:
      return *(undefined4 *)(param_1 + 0x88);
    case 0xe:
      if ((*(long *)(param_1 + 0x68) != 0) &&
         (puVar5 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar5 != (undefined8 *)0x0))
      {
        plVar3 = (long *)(**(code **)*puVar5)(puVar5);
        lVar4 = FUN_00be66c0();
        for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
          if (plVar3 == (long *)lVar4) {
            puVar5 = puVar5 + -10;
            goto LAB_00c33d7c;
          }
        }
      }
      puVar5 = (undefined8 *)0x0;
LAB_00c33d7c:
      FUN_00c1cce0(&local_28,puVar5);
      lVar4 = FUN_00be53f0(&local_28);
      if (local_28 != 0) {
        (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
      }
      uVar1 = 0x1c;
      if (lVar4 != 0) {
        uVar1 = 0;
        if (*(char *)(lVar4 + 0xc0) != '\0') {
          uVar1 = 0x1c;
        }
        return uVar1;
      }
      break;
    case 0xf:
      return 0x12;
    }
  }
  return uVar1;
}


