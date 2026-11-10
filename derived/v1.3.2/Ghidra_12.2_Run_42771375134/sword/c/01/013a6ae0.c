/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 013a6ae0; name: FUN_013a6ae0
 */


void FUN_013a6ae0(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_18 [8];
  
  if (((*(long *)(param_1 + 0x408) != 0) && (*(long *)(param_1 + 0x428) != 0)) &&
     (*(long *)(param_1 + 0x448) != 0)) {
    uVar1 = FUN_0137a220(*(long *)(param_1 + 0x408),auStack_18);
    FUN_01383c30(uVar1,1);
    uVar1 = FUN_0137a500(*(undefined8 *)(param_1 + 0x428),auStack_28);
    FUN_01383c30(uVar1,1);
    uVar1 = FUN_0137a7e0(*(undefined8 *)(param_1 + 0x448),auStack_30);
    FUN_01383c30(uVar1,1);
  }
  if (((*(long *)(param_1 + 0x410) != 0) && (*(long *)(param_1 + 0x430) != 0)) &&
     (*(long *)(param_1 + 0x450) != 0)) {
    uVar1 = FUN_0137a220(*(long *)(param_1 + 0x410),auStack_18);
    FUN_01383c30(uVar1,1);
    uVar1 = FUN_0137a500(*(undefined8 *)(param_1 + 0x430),auStack_28);
    FUN_01383c30(uVar1,1);
    uVar1 = FUN_0137a7e0(*(undefined8 *)(param_1 + 0x450),auStack_30);
    FUN_01383c30(uVar1,1);
  }
  if (((*(long *)(param_1 + 0x418) != 0) && (*(long *)(param_1 + 0x438) != 0)) &&
     (*(long *)(param_1 + 0x458) != 0)) {
    uVar1 = FUN_0137a220(*(long *)(param_1 + 0x418),auStack_18);
    FUN_01383c30(uVar1,1);
    uVar1 = FUN_0137a500(*(undefined8 *)(param_1 + 0x438),auStack_28);
    FUN_01383c30(uVar1,1);
    uVar1 = FUN_0137a7e0(*(undefined8 *)(param_1 + 0x458),auStack_30);
    FUN_01383c30(uVar1,1);
  }
  return;
}


