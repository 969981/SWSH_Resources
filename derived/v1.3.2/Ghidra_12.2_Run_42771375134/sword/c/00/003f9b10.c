/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 003f9b10; name: FUN_003f9b10
 */


void FUN_003f9b10(long param_1,uint *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x48) + 0x1048) + 0x40) +
          (ulong)*param_2;
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x10);
  lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x50);
  if (*(char *)(lVar5 + 0xd) == '\0') {
    *(undefined8 *)(lVar1 + 0xc) = 0;
    *(undefined4 *)(lVar1 + 0x14) = 0;
    *(undefined8 *)(lVar1 + 0x24) = 0;
    *(undefined4 *)(lVar1 + 0x2c) = 0;
    lVar4 = *(long *)(lVar4 + 0x50);
    cVar2 = *(char *)(lVar4 + 0xd);
  }
  else {
    *(undefined4 *)(lVar1 + 0xc) = *(undefined4 *)(lVar5 + 0x50);
    *(undefined4 *)(lVar1 + 0x10) = *(undefined4 *)(lVar5 + 0x54);
    *(undefined4 *)(lVar1 + 0x14) = *(undefined4 *)(lVar5 + 0x58);
    *(undefined4 *)(lVar1 + 0x24) = *(undefined4 *)(lVar5 + 0x60);
    *(undefined4 *)(lVar1 + 0x28) = *(undefined4 *)(lVar5 + 100);
    *(undefined4 *)(lVar1 + 0x2c) = *(undefined4 *)(lVar5 + 0x68);
    lVar4 = *(long *)(lVar4 + 0x50);
    cVar2 = *(char *)(lVar4 + 0xd);
  }
  if (cVar2 == '\0') {
    uVar3 = 0;
    *(undefined8 *)(lVar1 + 0x18) = 0;
    *(undefined4 *)(lVar1 + 0x20) = 0;
    *(undefined8 *)(lVar1 + 0x30) = 0;
  }
  else {
    *(undefined4 *)(lVar1 + 0x18) = *(undefined4 *)(lVar4 + 0x50);
    *(undefined4 *)(lVar1 + 0x1c) = *(undefined4 *)(lVar4 + 0x54);
    *(undefined4 *)(lVar1 + 0x20) = *(undefined4 *)(lVar4 + 0x58);
    *(undefined4 *)(lVar1 + 0x30) = *(undefined4 *)(lVar4 + 0x60);
    *(undefined4 *)(lVar1 + 0x34) = *(undefined4 *)(lVar4 + 100);
    uVar3 = *(undefined4 *)(lVar4 + 0x68);
  }
  *(undefined4 *)(lVar1 + 0x38) = uVar3;
  *(ushort *)((long)param_2 + 10) = *(ushort *)((long)param_2 + 10) & 0xfff7;
  return;
}


