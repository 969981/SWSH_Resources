/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066ff00; name: FUN_0066ff00
 */


void FUN_0066ff00(long *param_1)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02714d48 + 0x10);
  if ((long *)param_1[0x18] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x18] + 0x18))();
    param_1[0x18] = 0;
  }
  if (0 < *(int *)((long)param_1 + 0xac)) {
    lVar3 = 0;
    lVar4 = 0;
    do {
      (*(code *)**(undefined8 **)(param_1[0x16] + lVar3))();
      lVar4 = lVar4 + 1;
      lVar3 = lVar3 + 0x60;
    } while (lVar4 < *(int *)((long)param_1 + 0xac));
    (**(code **)(*(long *)param_1[1] + 0x48))
              ((long *)param_1[1],param_1[0x16],
               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectDefinition_Impl.cpp"
               ,0x91);
    (**(code **)(*(long *)param_1[1] + 0x48))
              ((long *)param_1[1],param_1[0x17],
               "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectDefinition_Impl.cpp"
               ,0x92);
    *(undefined4 *)((long)param_1 + 0xac) = 0;
  }
  if ((*(byte *)(param_1 + 0x14) & 1) == 0) {
    if (param_1[0x10] != 0) {
      plVar2 = (long *)param_1[0xf];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x10],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x10] = 0;
    }
    param_1[0x10] = 0;
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[10] != 0) {
      plVar2 = (long *)param_1[9];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[10],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[10] = 0;
    }
    param_1[10] = 0;
    bVar1 = *(byte *)(param_1 + 8);
  }
  else {
    bVar1 = *(byte *)(param_1 + 8);
  }
  if ((bVar1 & 1) == 0) {
    if (param_1[4] != 0) {
      plVar2 = (long *)param_1[3];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[4],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[4] = 0;
    }
    param_1[4] = 0;
  }
  FUN_005bf750(param_1 + 1);
  return;
}


