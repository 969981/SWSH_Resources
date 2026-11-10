/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004810e0; name: FUN_004810e0
 */


void FUN_004810e0(long param_1,long param_2,undefined8 param_3,short param_4,byte param_5,
                 byte param_6)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  ulong *puVar5;
  undefined1 auStack_70 [64];
  
  *(byte *)(param_1 + 0x5a) = param_5 & 1;
  *(short *)(param_1 + 0x58) = param_4;
  *(byte *)(param_1 + 0x5b) = param_6 & 1;
  *(undefined8 *)(param_1 + 0x10) = param_3;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0xff;
  *(undefined1 *)(param_1 + 0x30) = 0xff;
  *(undefined8 *)(param_1 + 0x38) = 0;
  if ((param_2 == 0) || (param_4 == 0)) goto LAB_004811c4;
  puVar5 = *(ulong **)(param_2 + 0x38);
  if (puVar5 != (ulong *)0x0) {
    if (((uint)*puVar5 >> 0x10 & 1) == 0) {
      uVar1 = FUN_004a4300(puVar5 + 2,param_1);
      if (((uVar1 & 1) != 0) && ((int)puVar5[3] == 0)) {
        uVar1 = 0xffffffffffffffff;
LAB_004811b4:
        puVar5[1] = uVar1;
      }
    }
    else {
      uVar1 = *puVar5 & 0x10000;
      if ((int)puVar5[3] == 0) {
        FUN_0049ddc0(*(undefined8 *)PTR_DAT_02712b50,param_2 + 0x30);
        puVar5 = *(ulong **)(param_2 + 0x38);
      }
      FUN_004a41a0(auStack_70,uVar1,param_1);
      uVar2 = FUN_00488b30(puVar5 + 2,auStack_70);
      if ((uVar2 & 1) != 0) {
        uVar1 = puVar5[1] & uVar1;
        goto LAB_004811b4;
      }
    }
  }
  if (*(long *)(param_1 + 0x40) == 0) {
    *(long *)(param_1 + 0x40) = param_2;
  }
LAB_004811c4:
  uVar3 = 0xffffffff;
  lVar4 = param_2;
  do {
    lVar4 = *(long *)(lVar4 + 0x78);
    uVar3 = uVar3 + 1;
  } while (lVar4 != 0);
  *(ulong *)(param_1 + 0x68) =
       (ulong)uVar3 << 0x20 | (ulong)(2 - (*(uint *)(param_2 + 0x9c) >> 0x11 & 1)) << 0x3d |
       (ulong)*(uint *)(param_2 + 0x10);
  return;
}


