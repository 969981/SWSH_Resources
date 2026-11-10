/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008e47c0; name: FUN_008e47c0
 */


void FUN_008e47c0(long param_1,long param_2)

{
  undefined4 uVar1;
  byte bVar2;
  undefined2 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = *(undefined4 *)(param_2 + 0x2b4);
  uVar3 = *(undefined2 *)(param_2 + 0x2b8);
  *(undefined1 *)(param_1 + 0x2ba) = *(undefined1 *)(param_2 + 0x2ba);
  *(undefined2 *)(param_1 + 0x2b8) = uVar3;
  *(undefined4 *)(param_1 + 0x2b4) = uVar1;
  lVar5 = 0x1f8;
  lVar6 = 0x90;
  *(undefined2 *)(param_1 + 0x456) = *(undefined2 *)(param_2 + 0x456);
  do {
    if (((*(byte *)(param_2 + lVar6) & 7) != 0) &&
       (uVar4 = FUN_00948670((int)lVar5 + -0x1f8,param_1), (uVar4 & 1) != 0)) {
      *(undefined8 *)(param_1 + lVar6) = *(undefined8 *)(param_2 + lVar6);
      *(undefined1 *)(param_1 + lVar5) = *(undefined1 *)(param_2 + lVar5);
    }
    lVar6 = lVar6 + 8;
    lVar5 = lVar5 + 1;
  } while (lVar6 != 0x1f8);
  if ((*(byte *)(param_2 + 0x35d) >> 2 & 1) != 0) {
    uVar3 = *(undefined2 *)(param_1 + 0x2a2);
    *(byte *)(param_1 + 0x35d) = *(byte *)(param_1 + 0x35d) | 4;
    if ((*(long *)(param_1 + 0x460) == 0) ||
       (uVar4 = FUN_00932ae0(*(long *)(param_1 + 0x460),4), (uVar4 & 1) == 0)) {
      lVar6 = *(long *)(param_1 + 0x460);
      *(undefined2 *)(param_1 + 0x2a2) = *(undefined2 *)(param_1 + 0x2a4);
    }
    else {
      lVar6 = *(long *)(param_1 + 0x460);
      *(undefined2 *)(param_1 + 0x2a2) = *(undefined2 *)(param_1 + 0x2a8);
    }
    if ((lVar6 != 0) && (uVar4 = FUN_00932ae0(lVar6,4), (uVar4 & 1) != 0)) {
      *(undefined2 *)(param_1 + 0x2a8) = uVar3;
      bVar2 = *(byte *)(param_2 + 0x35d);
      goto joined_r0x008e48bc;
    }
    *(undefined2 *)(param_1 + 0x2a4) = uVar3;
  }
  bVar2 = *(byte *)(param_2 + 0x35d);
joined_r0x008e48bc:
  if ((bVar2 >> 1 & 1) != 0) {
    *(byte *)(param_1 + 0x35d) = *(byte *)(param_1 + 0x35d) | 2;
  }
  *(undefined2 *)(param_2 + 0x456) = 0;
                    /* WARNING: Subroutine does not return */
  memset((void *)(param_2 + 0xc0),0,0x165);
}


