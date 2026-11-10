/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010ba2b0; name: FUN_010ba2b0
 */


void FUN_010ba2b0(long param_1)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  local_58 = DAT_02163b18;
  uStack_50 = DAT_02163b20;
  local_68 = DAT_02163b08;
  uStack_60 = DAT_02163b10;
  local_38 = DAT_02163b38;
  local_48 = DAT_02163b28;
  uStack_40 = DAT_02163b30;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar3 == (undefined8 *)0x0) goto LAB_010ba32c;
    plVar1 = (long *)(**(code **)*puVar3)(puVar3);
    lVar2 = FUN_010aad10();
    for (; plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      if (plVar1 == (long *)lVar2) {
        puVar3 = puVar3 + -10;
        goto LAB_010ba32c;
      }
    }
  }
  puVar3 = (undefined8 *)0x0;
LAB_010ba32c:
  *(undefined1 *)(puVar3 + 0x1a) = 1;
  FUN_0077eb10(puVar3[0x22],&local_68,puVar3[0x1b]);
  puVar3[0x13] = puVar3[0x1b];
  FUN_0077eb10(puVar3[0x22],&uStack_60,puVar3[0x1c]);
  puVar3[0x14] = puVar3[0x1c];
  FUN_0077eb10(puVar3[0x22],&local_58,puVar3[0x1d]);
  puVar3[0x15] = puVar3[0x1d];
  puVar3[0x18] = 0;
  puVar3[0x19] = 0;
  puVar3[0x16] = 0;
  puVar3[0x17] = 0;
  FUN_010bc320(param_1,0x3d116782b196eef7,1,0,1,0);
  *(undefined4 *)(param_1 + 0x7c) = 0x14;
  return;
}


