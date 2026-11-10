/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007502b0; name: FUN_007502b0
 */


void FUN_007502b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  
  lVar4 = param_1[0x12];
  puVar1 = PTR_DAT_02715e00 + 0x90;
  puVar2 = PTR_DAT_02715e00 + 0x100;
  *param_1 = (long)(PTR_DAT_02715e00 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (lVar4 != 0) {
    *(undefined1 *)(param_1 + 0x7a) = 0;
    *(undefined4 *)(param_1 + 0x66) = 0;
    FUN_00751810(param_1 + 0x10,param_1[0xf],lVar4);
    FUN_00751db0(param_1 + 0x10,param_1[0xf],lVar4,param_1[1]);
  }
  nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x41c));
  FUN_00750410(param_1 + 0x7d);
  pcVar3 = (code *)param_1[0x69];
  if (pcVar3 != (code *)0x0) {
    param_1[0x6b] = 0;
    param_1[0x6a] = 0;
    param_1[0x69] = 0;
    param_1[0x68] = 0;
    (*pcVar3)(param_1 + 0x6c);
  }
  lVar4 = param_1[0x62];
  param_1[0x62] = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[99] + 0x18))((long *)param_1[99],lVar4,param_1[100],param_1[0x65])
    ;
  }
  lVar4 = param_1[0x5e];
  param_1[0x5e] = 0;
  if (lVar4 != 0) {
    (**(code **)(*(long *)param_1[0x5f] + 0x18))
              ((long *)param_1[0x5f],lVar4,param_1[0x60],param_1[0x61]);
  }
  FUN_007505b0(param_1 + 0x12);
  puVar1 = PTR_DAT_02715098 + 0x90;
  puVar2 = PTR_DAT_02715098 + 0x100;
  *param_1 = (long)(PTR_DAT_02715098 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xd] != 0) {
    (**(code **)(*(long *)(param_1[0xd] + 0x48) + 0x18))();
    param_1[0xd] = 0;
  }
  puVar1 = PTR_DAT_027150a0 + 0x50;
  puVar2 = PTR_DAT_027150a0 + 0xc0;
  *param_1 = (long)(PTR_DAT_027150a0 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  if (param_1[0xb] != 0) {
    (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
    param_1[0xb] = 0;
  }
  return;
}


