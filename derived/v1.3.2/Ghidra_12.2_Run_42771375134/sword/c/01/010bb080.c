/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 010bb080; name: FUN_010bb080
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_010bb080(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40 [2];
  
  local_68 = DAT_02163b50;
  uStack_60 = DAT_02163b58;
  local_78 = DAT_02163b40;
  uStack_70 = DAT_02163b48;
  local_48 = DAT_02163b70;
  local_58 = DAT_02163b60;
  uStack_50 = DAT_02163b68;
  if (*(long *)(param_1 + 0x68) != 0) {
    puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60);
    if (puVar7 == (undefined8 *)0x0) goto LAB_010bb100;
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_010aad10();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar7 = puVar7 + -10;
        goto LAB_010bb100;
      }
    }
  }
  puVar7 = (undefined8 *)0x0;
LAB_010bb100:
  *(undefined1 *)(puVar7 + 0x1a) = 1;
  FUN_0077eb10(puVar7[0x22],&local_78,puVar7[0x1b]);
  puVar7[0x13] = puVar7[0x1b];
  FUN_0077eb10(puVar7[0x22],&uStack_70,puVar7[0x1c]);
  puVar7[0x18] = 0;
  puVar7[0x19] = 0;
  puVar7[0x16] = 0;
  puVar7[0x17] = 0;
  puVar7[0x14] = puVar7[0x1c];
  puVar7[0x15] = 0;
  if ((*(long *)(param_1 + 0x68) != 0) &&
     (puVar7 = *(undefined8 **)(*(long *)(param_1 + 0x68) + 0x60), puVar7 != (undefined8 *)0x0)) {
    plVar3 = (long *)(**(code **)*puVar7)(puVar7);
    lVar4 = FUN_010aad10();
    for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      if (plVar3 == (long *)lVar4) {
        puVar9 = puVar7 + -10;
        lVar4 = puVar7[5];
        if (lVar4 == 0) goto LAB_010bb198;
        goto LAB_010bb188;
      }
    }
  }
  puVar9 = (undefined8 *)0x0;
  lVar4 = _DAT_00000078;
  if (_DAT_00000078 != 0) {
LAB_010bb188:
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x10))();
  }
LAB_010bb198:
  FUN_0077d520(lVar4,&DAT_02158da8);
  uVar6 = puVar9[0xe];
  local_40[0] = puVar9[0xf];
  if (local_40[0] != 0) {
    (**(code **)(*(long *)(local_40[0] + 0x48) + 0x10))();
  }
  uVar5 = FUN_00ff39d0(uVar6,local_40);
  if (local_40[0] != 0) {
    (**(code **)(*(long *)(local_40[0] + 0x48) + 0x18))();
    local_40[0] = 0;
  }
  if (((uVar5 >> 0x20 & 1) == 0) || ((int)uVar5 != 0)) {
    uVar6 = 0x3d116382b196e82b;
    *(undefined1 *)(puVar9 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0x20;
  }
  else {
    *(undefined4 *)(param_1 + 0x7c) = 0x1f;
    lVar8 = puVar9[0xf];
    *(undefined1 *)(puVar9 + 0x10) = 1;
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x10))();
    }
    uVar6 = FUN_0077d470(lVar8);
    uVar1 = FUN_0077d480(lVar8);
    FUN_0077dea0(local_40,9,uVar6,uVar1);
    uVar2 = atoi((char *)local_40);
    if (lVar8 != 0) {
      (**(code **)(*(long *)(lVar8 + 0x48) + 0x18))((long *)(lVar8 + 0x48));
    }
    FUN_014ca220(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8),0,(ulong)uVar2 / 10000,4,2,1);
    FUN_014ca220(*(undefined8 *)(*(long *)(param_1 + 0xa8) + 0x5d8),1,uVar2 % 10000,4,2,1);
    uVar6 = 0x3d116882b196f0aa;
  }
  FUN_010bc320(param_1,uVar6,1,0,1,0);
  if (lVar4 != 0) {
    (**(code **)(*(long *)(lVar4 + 0x48) + 0x18))((long *)(lVar4 + 0x48));
  }
  return;
}


