/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008474b0; name: FUN_008474b0
 */


void FUN_008474b0(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  ulong uVar5;
  
  FUN_00829c80(param_1 + 8);
  if (*(byte *)(param_1 + 0x30) == 0) {
LAB_00847598:
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  else {
    *(undefined4 *)(param_1 + 0x48) = 0;
    if (((*(byte *)(param_1 + 0x30) & 1) == 0) ||
       (pbVar3 = *(byte **)(param_1 + 0x38), pbVar3 == *(byte **)PTR_DAT_02716d10)) {
LAB_00847500:
      if ((*(byte *)(param_1 + 0x30) >> 1 & 1) == 0) goto LAB_00847564;
LAB_00847508:
      pbVar3 = *(byte **)(param_1 + 0x40);
      if (pbVar3 == *(byte **)PTR_DAT_02716d10) goto LAB_00847564;
      if ((*pbVar3 & 1) != 0) {
        **(undefined1 **)(pbVar3 + 0x10) = 0;
        pbVar3[8] = 0;
        pbVar3[9] = 0;
        pbVar3[10] = 0;
        pbVar3[0xb] = 0;
        pbVar3[0xc] = 0;
        pbVar3[0xd] = 0;
        pbVar3[0xe] = 0;
        pbVar3[0xf] = 0;
        goto LAB_00847564;
      }
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      *(undefined4 *)(param_1 + 0x4c) = 1;
      bVar2 = *(byte *)(param_1 + 0x30);
    }
    else {
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        goto LAB_00847500;
      }
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      if ((*(byte *)(param_1 + 0x30) >> 1 & 1) != 0) goto LAB_00847508;
LAB_00847564:
      *(undefined4 *)(param_1 + 0x4c) = 1;
      bVar2 = *(byte *)(param_1 + 0x30);
    }
    if (((bVar2 >> 6 & 1) == 0) ||
       (pbVar3 = *(byte **)(param_1 + 0x50), pbVar3 == *(byte **)PTR_DAT_02716d10))
    goto LAB_00847598;
    if ((*pbVar3 & 1) == 0) {
      pbVar3[0] = 0;
      pbVar3[1] = 0;
      goto LAB_00847598;
    }
    **(undefined1 **)(pbVar3 + 0x10) = 0;
    pbVar3[8] = 0;
    pbVar3[9] = 0;
    pbVar3[10] = 0;
    pbVar3[0xb] = 0;
    pbVar3[0xc] = 0;
    pbVar3[0xd] = 0;
    pbVar3[0xe] = 0;
    pbVar3[0xf] = 0;
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if ((uVar1 & 0x3f00) != 0) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    if (((uVar1 >> 0xc & 1) == 0) ||
       (pbVar3 = *(byte **)(param_1 + 0x58), pbVar3 == *(byte **)PTR_DAT_02716d10)) {
LAB_008475d0:
      bVar2 = *(byte *)(param_1 + 0x31);
    }
    else {
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        goto LAB_008475d0;
      }
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
      bVar2 = *(byte *)(param_1 + 0x31);
    }
    if (((bVar2 >> 5 & 1) != 0) &&
       (pbVar3 = *(byte **)(param_1 + 0x60), pbVar3 != *(byte **)PTR_DAT_02716d10)) {
      if ((*pbVar3 & 1) == 0) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        uVar1 = *(uint *)(param_1 + 0x70);
        goto joined_r0x00847604;
      }
      **(undefined1 **)(pbVar3 + 0x10) = 0;
      pbVar3[8] = 0;
      pbVar3[9] = 0;
      pbVar3[10] = 0;
      pbVar3[0xb] = 0;
      pbVar3[0xc] = 0;
      pbVar3[0xd] = 0;
      pbVar3[0xe] = 0;
      pbVar3[0xf] = 0;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x70);
joined_r0x00847604:
  if (0 < (int)uVar1) {
    uVar5 = (ulong)uVar1;
    puVar4 = *(undefined8 **)(param_1 + 0x78);
    do {
      puVar4 = puVar4 + 1;
      (**(code **)(*(long *)*puVar4 + 0x38))();
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  *(undefined4 *)(param_1 + 0x30) = 0;
  if (((*(ulong *)(param_1 + 0x28) & 1) == 0) ||
     (*(long *)(*(ulong *)(param_1 + 0x28) & 0xfffffffffffffffe) == 0)) {
    return;
  }
  FUN_0080f500();
  return;
}


