/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0054f450; name: FUN_0054f450
 */


undefined8 * FUN_0054f450(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_02713988;
  puVar3 = (undefined8 *)
           FUN_005b9a50(*(undefined8 *)PTR_PTR_02713988,0x3d8,
                        "C:/workspace/YEBIS_draft/src/GPU/TinyEffect/TinyEffect.cpp",0x2f45,0);
  FUN_0054ae40();
  iVar2 = FUN_0054dc70(puVar3,param_1,param_2,param_3 & 1);
  if ((iVar2 < 0) && (puVar3 != (undefined8 *)0x0)) {
    uVar4 = *(undefined8 *)puVar1;
    (**(code **)*puVar3)(puVar3);
    FUN_005b9b10(uVar4,puVar3);
    puVar3 = (undefined8 *)0x0;
  }
  return puVar3;
}


