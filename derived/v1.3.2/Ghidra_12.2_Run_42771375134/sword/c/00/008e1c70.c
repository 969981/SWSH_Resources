/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e1c70; name: FUN_008e1c70
 */


void FUN_008e1c70(long param_1,ulong param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  FUN_008e1d70(param_1,param_1 + 700,uVar3);
  FUN_0087b2e0(uVar3,*(undefined4 *)(param_1 + 0x6c));
  FUN_0087b060(uVar3,*(undefined2 *)(param_1 + 0x74));
  if (*(short *)(param_1 + 0x74) == 0) {
    uVar2 = 0;
  }
  else if ((*(byte *)(param_1 + 0x98) & 7) == 0) {
    if ((*(byte *)(param_1 + 0xa0) & 7) == 0) {
      if ((*(byte *)(param_1 + 0xa8) & 7) == 0) {
        if ((*(byte *)(param_1 + 0xb0) & 7) == 0) {
          uVar2 = 0;
          if ((*(byte *)(param_1 + 0xb8) & 7) != 0) {
            uVar2 = 5;
          }
        }
        else {
          uVar2 = 4;
        }
      }
      else {
        uVar2 = 3;
      }
    }
    else {
      uVar2 = 2;
    }
  }
  else {
    uVar2 = 1;
  }
  FUN_0087b570(uVar3,uVar2);
  FUN_008e0b70(param_1);
  if (((*(ushort *)(param_1 + 0x87) >> 5 & 1) == 0) && ((param_2 & 1) == 0)) {
    uVar1 = (ushort)*(byte *)(param_1 + 0x33d);
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x87) & 0x1f;
  }
  FUN_0087df30(uVar3,uVar1,0);
  FUN_00878810(uVar3,*(undefined2 *)(param_1 + 0x76));
  return;
}


