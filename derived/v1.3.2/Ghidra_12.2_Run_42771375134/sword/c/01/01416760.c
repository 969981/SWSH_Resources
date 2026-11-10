/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01416760; name: FUN_01416760
 */


void FUN_01416760(long param_1)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  long lVar4;
  undefined4 uVar5;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined1 local_64;
  undefined4 local_62;
  undefined8 local_38;
  undefined8 local_30;
  undefined2 local_28;
  undefined1 local_26;
  
  local_26 = 0;
  local_38 = *(undefined8 *)(param_1 + 0x38);
  lVar4 = *(long *)(param_1 + 0x80);
  local_62 = 0xffff;
  local_88 = 0;
  uStack_80 = 0;
  uVar5 = 2;
  if (*(float *)(param_1 + 400) <= 0.0) {
    uVar5 = 1;
  }
  if (lVar4 != 0) {
    uVar5 = 0;
  }
  local_98 = 0;
  uStack_90 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  bVar2 = true;
  local_30 = CONCAT44((int)(*(float *)(param_1 + 400) / DAT_01d4bfc8),uVar5);
  local_70 = 0x8abaf272a347e952;
  local_64 = 1;
  local_78 = 0;
  local_b0 = 0;
  local_28 = 0x101;
  local_68 = 4;
  if (lVar4 != 0) {
    memcpy(&local_b0,(void *)(param_1 + 0x40),lVar4 << 3);
    bVar2 = local_b0 == 0;
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  if (*(int *)(param_1 + 0x10) == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x10) == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x18);
    }
  }
  if (bVar2) {
    FUN_01038170();
    iVar1 = *(int *)(param_1 + 0x10);
  }
  else {
    FUN_010381d0(uVar3,&local_38,&local_b0);
    iVar1 = *(int *)(param_1 + 0x10);
  }
  if (iVar1 == 1) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
  }
  else if (iVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
  }
  else {
    uVar3 = 0;
  }
  FUN_00ffa3d0(uVar3,1);
  *(undefined1 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  return;
}


