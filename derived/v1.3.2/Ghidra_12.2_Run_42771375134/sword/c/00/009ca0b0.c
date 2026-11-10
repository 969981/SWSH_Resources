/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 009ca0b0; name: FUN_009ca0b0
 */


void FUN_009ca0b0(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  ulong uVar3;
  
  if (*(char *)(param_1 + 0x30) == '\0') {
    switch(*(undefined4 *)(param_1 + 0x2c)) {
    case 0:
      iVar2 = FUN_009c5460(*(undefined8 *)(param_1 + 0x20));
      if (iVar2 == 1) {
        uVar3 = FUN_009ca320(param_1);
        if ((uVar3 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 5;
          return;
        }
      }
      else {
        iVar2 = FUN_009c5460(*(undefined8 *)(param_1 + 0x20));
        if (iVar2 != 2) {
          *(undefined4 *)(param_1 + 0x2c) = 5;
          return;
        }
        uVar3 = FUN_009ca460(param_1);
        if ((uVar3 & 1) == 0) {
          *(undefined4 *)(param_1 + 0x2c) = 5;
          return;
        }
      }
      *(undefined4 *)(param_1 + 0x2c) = 1;
      return;
    case 1:
      uVar3 = FUN_009ca280(param_1);
      uVar1 = 2;
      if ((uVar3 & 1) == 0) {
        uVar1 = 5;
      }
      *(undefined4 *)(param_1 + 0x2c) = uVar1;
      return;
    case 2:
      uVar1 = FUN_008f9500(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                           *(undefined1 *)(param_1 + 0x28));
      uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x340))(*(long **)(param_1 + 0x18),uVar1);
      if ((uVar3 & 1) != 0) {
        *(undefined4 *)(param_1 + 0x2c) = 3;
        return;
      }
      break;
    case 3:
      iVar2 = FUN_009c5460(*(undefined8 *)(param_1 + 0x20));
      if (iVar2 == 1) {
        FUN_009ca5a0(param_1);
      }
      else {
        iVar2 = FUN_009c5460(*(undefined8 *)(param_1 + 0x20));
        if (iVar2 != 2) goto LAB_009ca20c;
        FUN_009ca650(param_1);
      }
      (**(code **)(**(long **)(param_1 + 0x18) + 0x1c0))(*(long **)(param_1 + 0x18),param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x2c) = 4;
      return;
    case 4:
      uVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x1f0))();
      if ((uVar3 & 1) != 0) {
LAB_009ca20c:
        *(undefined4 *)(param_1 + 0x2c) = 5;
        return;
      }
      break;
    default:
      *(undefined1 *)(param_1 + 0x30) = 1;
      return;
    }
  }
  return;
}


