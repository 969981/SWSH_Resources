/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bb600; name: FUN_010bb600
 */


void FUN_010bb600(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar2 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar2 & 1) == 0) {
    return;
  }
  iVar1 = FUN_010386e0(*(undefined8 *)(param_1 + 0xa8));
  if (iVar1 == 1) {
    *(undefined4 *)(param_1 + 0x7c) = 1;
    FUN_01038270(*(undefined8 *)(param_1 + 0xa8),1);
    if (*(int *)(param_1 + 0x80) == 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x88);
    }
    else {
      uVar5 = *(undefined8 *)(param_1 + 0x90);
    }
    FUN_00ffa3d0(uVar5,0);
    FUN_010bc6f0(param_1,1,1);
    return;
  }
  if (iVar1 != 0) {
    return;
  }
  local_58 = DAT_02163b50;
  uStack_50 = DAT_02163b58;
  local_68 = DAT_02163b40;
  uStack_60 = DAT_02163b48;
  local_38 = DAT_02163b70;
  local_48 = DAT_02163b60;
  uStack_40 = DAT_02163b68;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar6 == (undefined8 *)0x0) goto LAB_010bb6a0;
    plVar3 = (long *)(**(code **)*puVar6)(puVar6);
    lVar4 = FUN_010aad10();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar6 = puVar6 + -10;
        goto LAB_010bb6a0;
      }
    }
  }
  puVar6 = (undefined8 *)0x0;
LAB_010bb6a0:
  *(undefined1 *)(puVar6 + 0x1a) = 1;
  FUN_0077eb10(puVar6[0x22],&local_68,puVar6[0x1b]);
  puVar6[0x13] = puVar6[0x1b];
  FUN_0077eb10(puVar6[0x22],&uStack_60,puVar6[0x1c]);
  puVar6[0x18] = 0;
  puVar6[0x19] = 0;
  puVar6[0x16] = 0;
  puVar6[0x17] = 0;
  puVar6[0x14] = puVar6[0x1c];
  puVar6[0x15] = 0;
  FUN_010bc320(param_1,0x126106ec9b956ed9,1,0,0,0);
  *(undefined4 *)(param_1 + 0x7c) = 0x2b;
  return;
}


