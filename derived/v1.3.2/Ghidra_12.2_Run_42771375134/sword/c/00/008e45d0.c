/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e45d0; name: FUN_008e45d0
 */


void FUN_008e45d0(long param_1)

{
  undefined1 uVar1;
  undefined2 uVar2;
  short sVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined1 *)(param_1 + 0x298);
  uVar4 = FUN_0087b350(*(undefined8 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  FUN_008e0a20(param_1,1,1,uVar1);
  uVar2 = FUN_0087cdb0(*(undefined8 *)(param_1 + 0x60));
  *(undefined2 *)(param_1 + 0x338) = uVar2;
  uVar1 = FUN_008783c0(*(undefined8 *)(param_1 + 0x60));
  *(undefined1 *)(param_1 + 0x33d) = uVar1;
  sVar3 = FUN_008ec470(*(undefined2 *)(param_1 + 0x70),uVar1,0x22);
  *(byte *)(param_1 + 0x2db) = *(byte *)(param_1 + 0x2db) & 0xf0;
  *(byte *)(param_1 + 0x2f7) = *(byte *)(param_1 + 0x2f7) & 0xf0;
  *(byte *)(param_1 + 0x313) = *(byte *)(param_1 + 0x313) & 0xf0;
  if (sVar3 == 0) {
    sVar3 = 1;
  }
  *(short *)(param_1 + 0x33a) = sVar3;
  *(byte *)(param_1 + 0x2cf) = *(byte *)(param_1 + 0x2cf) & 0xf0;
  *(byte *)(param_1 + 0x2eb) = *(byte *)(param_1 + 0x2eb) & 0xf0;
  *(undefined4 *)(param_1 + 0x350) = 0;
  *(undefined4 *)(param_1 + 0x34c) = 0;
  *(undefined2 *)(param_1 + 0x348) = 0;
  *(byte *)(param_1 + 0x307) = *(byte *)(param_1 + 0x307) & 0xf0;
  *(byte *)(param_1 + 0x32f) = *(byte *)(param_1 + 0x32f) & 0xf0;
  *(byte *)(param_1 + 0x323) = *(byte *)(param_1 + 0x323) & 0xf0;
  *(undefined8 *)(param_1 + 0x358) = 0;
  *(undefined2 *)(param_1 + 0x456) = 0;
  *(undefined1 *)(param_1 + 0x341) = 0x12;
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_1 + 0xc0),0,0x165);
}


