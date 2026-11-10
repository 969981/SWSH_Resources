/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008deac0; name: FUN_008deac0
 */


void FUN_008deac0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = 0x120;
  do {
    lVar2 = param_1 + lVar3;
    if (*(long *)(lVar2 + 0xf0) == 0) {
      lVar4 = *(long *)(param_1 + lVar3);
      if (lVar4 == 0) {
        *(undefined8 *)(lVar2 + 0xf0) = 0;
        lVar2 = *(long *)(param_1 + lVar3);
        *(undefined8 *)(param_1 + lVar3) = 0;
      }
      else {
        (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
        lVar1 = *(long *)(lVar2 + 0xf0);
        *(long *)(lVar2 + 0xf0) = lVar4;
        if (lVar1 != 0) {
          (**(code **)(*(long *)(lVar1 + 0x48) + 0x18))();
        }
        lVar2 = *(long *)(param_1 + lVar3);
        *(undefined8 *)(param_1 + lVar3) = 0;
      }
      if (lVar2 != 0) {
        (**(code **)(*(long *)(lVar2 + 0x48) + 0x18))();
      }
    }
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x210);
  FUN_009140d0(param_1 + 8);
  FUN_009140d0(param_1 + 0x40);
  FUN_009140d0(param_1 + 0x78);
  FUN_009140d0(param_1 + 0xb0);
  FUN_009140d0(param_1 + 0xe8);
  return;
}


