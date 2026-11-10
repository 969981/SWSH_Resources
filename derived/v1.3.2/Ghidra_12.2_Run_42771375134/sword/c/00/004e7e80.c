/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004e7e80; name: FUN_004e7e80
 */


undefined8 * FUN_004e7e80(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  undefined1 *local_40;
  ulong local_38;
  
  puVar3 = PTR_DAT_02712d20;
  puVar4 = (undefined8 *)FUN_00497c70(*(undefined8 *)PTR_DAT_02712d20,param_1);
  if (puVar4 == (undefined8 *)0x0) {
    FUN_00497cd0(*(undefined8 *)puVar3,param_1,0);
    puVar4 = (undefined8 *)FUN_00497c70(*(undefined8 *)puVar3,param_1);
    if (puVar4 != (undefined8 *)0x0) {
      local_40 = (undefined1 *)0x0;
      local_38 = 0;
      FUN_004e7fa0(auStack_48,param_2);
      FUN_00498110(*(undefined8 *)puVar3,puVar4[9],auStack_48,0);
      lVar5 = FUN_004e82d0(puVar4);
      if (lVar5 == 0) {
        FUN_00497b80(*(undefined8 *)puVar3,param_1);
        iVar1 = *(int *)(puVar4 + 10);
        *(int *)(puVar4 + 10) = iVar1 + -1;
        if (iVar1 + -1 == 0) {
          uVar2 = *(undefined4 *)PTR_DAT_02712a90;
          (**(code **)*puVar4)(puVar4);
          FUN_00404870(uVar2,puVar4);
        }
        puVar4 = (undefined8 *)0x0;
      }
      if ((local_40 != (undefined1 *)0x0) &&
         (local_38 = local_38 & 0xffffffff00000000, auStack_48 != local_40)) {
        FUN_004047f0(*(undefined4 *)PTR_DAT_02712a90);
      }
    }
  }
  return puVar4;
}


