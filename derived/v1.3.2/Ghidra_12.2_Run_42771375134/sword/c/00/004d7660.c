/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004d7660; name: FUN_004d7660
 */


undefined8 FUN_004d7660(long param_1,long param_2,long param_3)

{
  uint uVar1;
  short sVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if (*(short *)(param_2 + 0x12) == 0) {
    return 0x11;
  }
  uVar4 = *(uint *)(param_1 + 0x50);
  uVar1 = *(uint *)(param_1 + 0x44);
  do {
    uVar3 = (*(code *)(&PTR_LAB_025f28b8)[(ulong)uVar4 * 8 + (ulong)*(byte *)(param_1 + 0x5c)])
                      (param_2,param_3,uVar1,param_1);
    uVar4 = *(uint *)(param_1 + 0x50);
    if (uVar4 == 2) {
      if (0x3ff < *(uint *)(param_1 + 0x3c)) {
        *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x38);
        uVar4 = 1;
        *(undefined4 *)(param_1 + 0x50) = 1;
        goto LAB_004d76dc;
      }
      uVar4 = 2;
      sVar2 = *(short *)(param_2 + 0x12);
    }
    else {
LAB_004d76dc:
      sVar2 = *(short *)(param_2 + 0x12);
    }
    if ((sVar2 == 0) || (uVar1 = *(uint *)(param_1 + 0x44), uVar1 <= *(ushort *)(param_3 + 0x12))) {
      return uVar3;
    }
  } while( true );
}


