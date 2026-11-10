/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010b9770; name: FUN_010b9770
 */


void FUN_010b9770(long param_1)

{
  ulong uVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = FUN_010384a0(*(undefined8 *)(param_1 + 0xa8));
  if ((uVar1 & 1) == 0) {
    return;
  }
  *(undefined4 *)(param_1 + 0x7c) = 8;
  local_58 = DAT_02163b50;
  uStack_50 = DAT_02163b58;
  local_68 = DAT_02163b40;
  uStack_60 = DAT_02163b48;
  local_38 = DAT_02163b70;
  local_48 = DAT_02163b60;
  uStack_40 = DAT_02163b68;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar4 == (undefined8 *)0x0) goto LAB_010b9804;
    plVar2 = (long *)(**(code **)*puVar4)(puVar4);
    lVar3 = FUN_010aad10();
    for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
      if (plVar2 == (long *)lVar3) {
        puVar4 = puVar4 + -10;
        goto LAB_010b9804;
      }
    }
  }
  puVar4 = (undefined8 *)0x0;
LAB_010b9804:
  *(undefined1 *)(puVar4 + 0x1a) = 1;
  FUN_0077eb10(puVar4[0x22],&local_68,puVar4[0x1b]);
  puVar4[0x13] = puVar4[0x1b];
  FUN_0077eb10(puVar4[0x22],&uStack_60,puVar4[0x1c]);
  puVar4[0x18] = 0;
  puVar4[0x19] = 0;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0;
  puVar4[0x14] = puVar4[0x1c];
  puVar4[0x15] = 0;
  FUN_010bc320(param_1,0x30b9f8570c93ccee,1,0,0,0);
  return;
}


