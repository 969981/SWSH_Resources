/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00666d70; name: FUN_00666d70
 */


void FUN_00666d70(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_90 [16];
  long *local_80;
  long lStack_78;
  undefined1 auStack_70 [16];
  
  plVar5 = (long *)param_1[0x16];
  if (plVar5 != (long *)0x0) {
    FUN_006966f0(auStack_70,plVar5 + 3,1);
    puVar3 = PTR_DAT_02714328;
    if (plVar5[0xb] != 0) {
      puVar1 = PTR_DAT_02714328 + 0x10;
      do {
        lStack_78 = plVar5[0xc];
        lVar6 = *(long *)(lStack_78 + 0x20);
        local_80 = plVar5 + 9;
        FUN_00666fc0(auStack_90,plVar5 + 9,&local_80);
        if ((lVar6 != 0) && (plVar7 = (long *)*param_1, plVar7 != (long *)0x0)) {
          FUN_0066e8d0(lVar6);
          plVar2 = (long *)(lVar6 + 0xb0);
          *(undefined **)(lVar6 + 0x88) = puVar1;
          if (((*(byte *)(lVar6 + 0xd0) & 1) == 0) && (*plVar2 != 0)) {
            plVar4 = *(long **)(lVar6 + 0x90);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x48))
                        (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *plVar2 = 0;
          }
          *(undefined8 *)(lVar6 + 0x98) = 0;
          *(undefined8 *)(lVar6 + 0xa0) = 0;
          *(undefined8 *)(lVar6 + 0xd0) = 0;
          *plVar2 = 0;
          *(undefined8 *)(lVar6 + 0xb8) = 0;
          *(undefined8 *)(lVar6 + 0xc0) = 0;
          plVar2 = (long *)(lVar6 + 0x48);
          *(undefined **)(lVar6 + 0x20) = puVar3 + 0x10;
          if (((*(byte *)(lVar6 + 0x68) & 1) == 0) && (*plVar2 != 0)) {
            plVar4 = *(long **)(lVar6 + 0x28);
            if (plVar4 != (long *)0x0) {
              (**(code **)(*plVar4 + 0x48))
                        (plVar4,*plVar2,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
            }
            *plVar2 = 0;
          }
          *(undefined8 *)(lVar6 + 0x30) = 0;
          *(undefined8 *)(lVar6 + 0x38) = 0;
          *(undefined8 *)(lVar6 + 0x68) = 0;
          *(undefined8 *)(lVar6 + 0x50) = 0;
          *(undefined8 *)(lVar6 + 0x58) = 0;
          *plVar2 = 0;
          (**(code **)(*plVar7 + 0x48))
                    (plVar7,lVar6,
                     "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiGfx/Source/ShaderEffect/SiGfx_ShaderEffectPackage_Impl.cpp"
                     ,0xc6);
        }
      } while (plVar5[0xb] != 0);
    }
    FUN_00696730(auStack_70);
    (**(code **)(*plVar5 + 0x18))(plVar5);
    param_1[0x16] = 0;
  }
  if ((long *)param_1[0xb] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xb] + 0x18))();
    param_1[0xb] = 0;
  }
  FUN_00667650(*param_1,param_1 + 0xc,0);
  param_1[0xc] = PTR_DAT_02714cf0 + 0x10;
  plVar5 = param_1 + 0x11;
  if (((*(byte *)(param_1 + 0x15) & 1) == 0) && (*plVar5 != 0)) {
    plVar7 = (long *)param_1[0xd];
    if (plVar7 != (long *)0x0) {
      (**(code **)(*plVar7 + 0x48))
                (plVar7,*plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
    }
    *plVar5 = 0;
  }
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x15] = 0;
  *plVar5 = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  if ((*(byte *)(param_1 + 6) & 1) == 0) {
    if (param_1[2] != 0) {
      plVar5 = (long *)param_1[1];
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x48))
                  (plVar5,param_1[2],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[2] = 0;
    }
    param_1[2] = 0;
  }
  return;
}


