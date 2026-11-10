/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 005cc500; name: FUN_005cc500
 */


void FUN_005cc500(long *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  
  if ((int)param_1[4] != 0) {
    *(int *)(param_1 + 4) = (int)param_1[4] + -1;
    if ((int)param_1[4] == 0) {
      plVar1 = (long *)FUN_0067d0e0();
      (**(code **)(*plVar1 + 0xa0))(plVar1,PTR_DAT_02713fb0);
      plVar1 = (long *)FUN_0067d0e0();
      (**(code **)(*plVar1 + 0xa0))(plVar1,PTR_DAT_02713fb8);
      plVar1 = (long *)FUN_0067d0e0();
      (**(code **)(*plVar1 + 0xa0))(plVar1,PTR_DAT_02713fc0);
      FUN_005cda10();
      *PTR_DAT_02713fc8 = 1;
      (**(code **)(*param_1 + 0x120))(param_1);
      plVar1 = param_1 + 0x28;
      if (((*(byte *)(param_1 + 0x2c) & 1) == 0) &&
         (plVar5 = (long *)*plVar1, plVar5 != (long *)0x0)) {
        plVar6 = (long *)param_1[0x24];
        if (plVar6 != (long *)0x0) {
          lVar2 = (**(code **)(*plVar6 + 0x50))(plVar6,plVar5);
          if (lVar2 != 0) {
            plVar8 = plVar5;
            do {
              if ((*(byte *)(plVar8 + 5) & 1) == 0) {
                if (plVar8[1] != 0) {
                  plVar3 = (long *)*plVar8;
                  if (plVar3 != (long *)0x0) {
                    (**(code **)(*plVar3 + 0x48))
                              (plVar3,plVar8[1],"../../../../Include\\SiCore/SiCore_String.inl",0xe1
                              );
                  }
                  plVar8[1] = 0;
                }
                plVar8[1] = 0;
              }
              plVar8 = plVar8 + 6;
              lVar2 = lVar2 + -1;
            } while (lVar2 != 0);
          }
          (**(code **)(*plVar6 + 0x48))
                    (plVar6,plVar5,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar1 = 0;
      }
      param_1[0x25] = 0;
      param_1[0x26] = 0;
      plVar5 = param_1 + 0x1e;
      param_1[0x2c] = 0;
      *plVar1 = 0;
      param_1[0x29] = 0;
      param_1[0x2a] = 0;
      if (((*(byte *)(param_1 + 0x22) & 1) == 0) && (*plVar5 != 0)) {
        plVar1 = (long *)param_1[0x1d];
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x48))
                    (plVar1,*plVar5,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
        }
        *plVar5 = 0;
      }
      *plVar5 = 0;
      param_1[0x1f] = 0;
      plVar1 = param_1 + 0x34;
      param_1[0x21] = 0;
      param_1[0x22] = 0;
      if (((*(byte *)(param_1 + 0x38) & 1) == 0) && (*plVar1 != 0)) {
        plVar5 = (long *)param_1[0x33];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x48))
                    (plVar5,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
        }
        *plVar1 = 0;
      }
      *plVar1 = 0;
      param_1[0x35] = 0;
      plVar1 = param_1 + 0x2e;
      param_1[0x37] = 0;
      param_1[0x38] = 0;
      if (((*(byte *)(param_1 + 0x32) & 1) == 0) && (*plVar1 != 0)) {
        plVar5 = (long *)param_1[0x2d];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x48))
                    (plVar5,*plVar1,"../../../../Include\\SiCore/SiCore_String.inl",0x158);
        }
        *plVar1 = 0;
      }
      *plVar1 = 0;
      param_1[0x2f] = 0;
      plVar1 = param_1 + 0x18;
      param_1[0x31] = 0;
      param_1[0x32] = 0;
      if (((*(byte *)(param_1 + 0x1c) & 1) == 0) && (*plVar1 != 0)) {
        plVar5 = (long *)param_1[0x14];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x48))
                    (plVar5,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar1 = 0;
      }
      param_1[0x15] = 0;
      param_1[0x16] = 0;
      param_1[0x1c] = 0;
      *plVar1 = 0;
      param_1[0x19] = 0;
      param_1[0x1a] = 0;
      if ((long *)param_1[0xc] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0xc] + 0x18))();
        param_1[0xc] = 0;
      }
      if ((long *)param_1[0xb] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0xb] + 0x18))();
        param_1[0xb] = 0;
      }
      if ((long *)param_1[10] != (long *)0x0) {
        (**(code **)(*(long *)param_1[10] + 0x18))();
        param_1[10] = 0;
      }
      if ((long *)param_1[9] != (long *)0x0) {
        (**(code **)(*(long *)param_1[9] + 0x18))();
        param_1[9] = 0;
      }
      if ((long *)param_1[8] != (long *)0x0) {
        (**(code **)(*(long *)param_1[8] + 0x18))();
        param_1[8] = 0;
      }
      if ((long *)param_1[7] != (long *)0x0) {
        (**(code **)(*(long *)param_1[7] + 0x18))();
        param_1[7] = 0;
      }
      if ((long *)param_1[6] != (long *)0x0) {
        (**(code **)(*(long *)param_1[6] + 0x18))();
        param_1[6] = 0;
      }
      if ((long *)param_1[0x56] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x56] + 0x18))();
        param_1[0x56] = 0;
      }
      uVar4 = param_1[0x3d];
      plVar1 = param_1 + 0x40;
      if (uVar4 != 0) {
        uVar7 = 0;
        do {
          plVar5 = *(long **)(*plVar1 + uVar7 * 8);
          if (plVar5 != (long *)0x0) {
            *(undefined8 *)(*plVar1 + uVar7 * 8) = 0;
            (**(code **)(*plVar5 + 0x18))();
            uVar4 = param_1[0x3d];
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar4);
      }
      if (((*(byte *)(param_1 + 0x44) & 1) == 0) && (*plVar1 != 0)) {
        plVar5 = (long *)param_1[0x3c];
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x48))
                    (plVar5,*plVar1,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2);
        }
        *plVar1 = 0;
      }
      param_1[0x3d] = 0;
      param_1[0x3e] = 0;
      param_1[0x44] = 0;
      *plVar1 = 0;
      param_1[0x41] = 0;
      param_1[0x42] = 0;
      plVar1 = (long *)FUN_005bf860();
      (**(code **)(*plVar1 + 0xd8))(plVar1,param_1[0x3a]);
      if ((long *)param_1[0x3a] != (long *)0x0) {
        (**(code **)(*(long *)param_1[0x3a] + 0x18))();
        param_1[0x3a] = 0;
      }
      if ((long *)param_1[3] != (long *)0x0) {
        (**(code **)(*(long *)param_1[3] + 0x18))();
        param_1[3] = 0;
      }
    }
  }
  return;
}


