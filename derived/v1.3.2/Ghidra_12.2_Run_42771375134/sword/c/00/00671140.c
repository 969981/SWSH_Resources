/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00671140; name: FUN_00671140
 */


void FUN_00671140(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auStack_60 [16];
  
  FUN_006966f0(auStack_60,param_1 + 3,1);
  plVar4 = (long *)param_1[0x2b];
  if (plVar4 != (long *)0x0) {
    plVar1 = param_1 + 0x2b;
    do {
      lVar2 = *plVar4;
      plVar5 = (long *)plVar4[1];
      if (lVar2 == 0) {
        if (plVar5 == (long *)0x0) {
          *plVar1 = 0;
          param_1[0x2c] = 0;
        }
        else {
          *plVar5 = 0;
          *plVar1 = (long)plVar5;
        }
LAB_006711dc:
        *plVar4 = 0;
        plVar4[1] = 0;
        param_1[0x2d] = param_1[0x2d] + -1;
      }
      else {
        if (plVar5 != (long *)0x0) {
          *plVar5 = lVar2;
          *(long **)(lVar2 + 8) = plVar5;
          goto LAB_006711dc;
        }
        if (((long *)param_1[0x2c] == plVar4) && ((long *)param_1[0x2c] != (long *)0x0)) {
          *(undefined8 *)(lVar2 + 8) = 0;
          param_1[0x2c] = lVar2;
          goto LAB_006711dc;
        }
      }
      plVar5 = (long *)param_1[1];
      if (plVar5 != (long *)0x0) {
        if ((*(byte *)(plVar4 + 7) & 1) == 0) {
          if (plVar4[3] != 0) {
            plVar3 = (long *)plVar4[2];
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x48))
                        (plVar3,plVar4[3],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
            }
            plVar4[3] = 0;
          }
          plVar4[3] = 0;
        }
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,plVar4,
                   "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectVariationList_Impl.cpp"
                   ,0x61);
      }
      plVar4 = (long *)*plVar1;
    } while (plVar4 != (long *)0x0);
  }
  FUN_00696730(auStack_60);
  (**(code **)(*param_1 + 0x98))(param_1);
  return;
}


