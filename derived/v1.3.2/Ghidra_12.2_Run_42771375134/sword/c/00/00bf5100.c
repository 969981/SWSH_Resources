/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00bf5100; name: FUN_00bf5100
 */


void FUN_00bf5100(long param_1)

{
  long lVar1;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  if ((*(long *)(param_1 + 0x100) != 0) && (lVar1 = *(long *)(param_1 + 0x90), lVar1 != 0)) {
    local_58 = *(undefined8 *)(lVar1 + 0x130);
    local_50 = *(undefined8 *)(lVar1 + 0x138);
    uStack_48 = *(undefined8 *)(lVar1 + 0x140);
    local_40 = *(undefined8 *)(lVar1 + 0x148);
    uStack_38 = *(undefined8 *)(lVar1 + 0x150);
    local_30 = *(undefined8 *)(lVar1 + 0x158);
    uStack_28 = *(undefined8 *)(lVar1 + 0x160);
    uStack_80 = *(undefined8 *)(lVar1 + 0x178);
    local_90 = *(undefined8 *)(lVar1 + 0x168);
    local_88 = *(undefined8 *)(lVar1 + 0x170);
    local_78 = *(undefined8 *)(lVar1 + 0x180);
    uStack_70 = *(undefined8 *)(lVar1 + 0x188);
    local_68 = *(undefined8 *)(lVar1 + 400);
    uStack_60 = *(undefined8 *)(lVar1 + 0x198);
    FUN_00c0fc80(*(long *)(param_1 + 0x100),*(undefined1 *)(lVar1 + 0x128),&local_58,&local_90);
    FUN_00bf5040(param_1);
  }
  return;
}


