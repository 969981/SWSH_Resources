/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004c2ff0; name: FUN_004c2ff0
 */


void FUN_004c2ff0(long *param_1,undefined8 *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  
  puVar3 = PTR_DAT_02712a90;
  puVar4 = (undefined8 *)param_2[1];
  while (puVar4 != (undefined8 *)0x0) {
    if (puVar4[3] == 0) {
      *param_2 = 0;
      param_2[1] = 0;
      uVar1 = *(uint *)(puVar4 + 2);
    }
    else {
      param_2[1] = puVar4[3];
      uVar1 = *(uint *)(puVar4 + 2);
    }
    if (uVar1 >> 0x1e == 2) {
      (**(code **)(*param_1 + 8))(param_1,param_2,puVar4);
    }
    FUN_004c30d0(param_1,*puVar4,puVar4 + 1,*(undefined4 *)((long)puVar4 + 0xc),0,1);
    uVar2 = *(undefined4 *)puVar3;
    FUN_004c2ce0(*puVar4);
    FUN_00404870(uVar2,puVar4);
    puVar4 = (undefined8 *)param_2[1];
  }
  FUN_004c34a0(param_1,param_3);
  return;
}


