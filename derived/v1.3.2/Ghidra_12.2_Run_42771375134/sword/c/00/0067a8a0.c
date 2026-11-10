/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0067a8a0; name: FUN_0067a8a0
 */


void FUN_0067a8a0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = (long)(PTR_DAT_02714de8 + 0x10);
  if (param_1[0x1d] != 0) {
    if ((char)param_1[0x1f] != '\0') {
      (**(code **)(*(long *)param_1[3] + 0x48))
                ((long *)param_1[3],param_1[0x1d],
                 "C:/workspace/sisdk/3.0/SDK/Core/Libsrc/SiIO/Source/SiIO_BinaryArchive_Impl.cpp",
                 0x28a);
      param_1[0x1d] = 0;
      *(undefined1 *)(param_1 + 0x1f) = 0;
    }
    if ((*(char *)((long)param_1 + 0xf9) != '\0') && ((long *)param_1[0x20] != (long *)0x0)) {
      (**(code **)(*(long *)param_1[0x20] + 0x18))();
      param_1[0x20] = 0;
    }
    param_1[0x1e] = 0;
  }
  lVar3 = param_1[0x25];
  param_1[0x2d] = 0;
  if (lVar3 != 0) {
    plVar2 = param_1 + 0x23;
    do {
      plVar1 = (long *)*plVar2;
      if (plVar1 != (long *)0x0) {
        lVar3 = plVar1[3];
        lVar4 = plVar1[4];
        if (lVar3 == 0) {
          if (lVar4 == 0) {
            *plVar2 = 0;
            param_1[0x24] = 0;
          }
          else {
            *(undefined8 *)(lVar4 + 0x18) = 0;
            *plVar2 = lVar4;
          }
LAB_0067a984:
          plVar1[3] = 0;
          plVar1[4] = 0;
          param_1[0x25] = param_1[0x25] + -1;
        }
        else {
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x18) = lVar3;
            *(long *)(lVar3 + 0x20) = lVar4;
            goto LAB_0067a984;
          }
          if (((long *)param_1[0x24] == plVar1) && ((long *)param_1[0x24] != (long *)0x0)) {
            *(undefined8 *)(lVar3 + 0x20) = 0;
            param_1[0x24] = lVar3;
            goto LAB_0067a984;
          }
        }
        (**(code **)(*plVar1 + 0x18))();
        lVar3 = param_1[0x25];
      }
    } while (lVar3 != 0);
  }
  param_1[0x2e] = (long)(PTR_DAT_02714df0 + 0x10);
  plVar2 = param_1 + 0x33;
  if (((*(byte *)(param_1 + 0x37) & 1) == 0) && (lVar3 = *plVar2, lVar3 != 0)) {
    plVar1 = (long *)param_1[0x2f];
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x50))(plVar1,lVar3);
      (**(code **)(*plVar1 + 0x48))(plVar1,lVar3,"../../../../Include\\SiCore/SiCore_Array.h",0x5f2)
      ;
    }
    *plVar2 = 0;
  }
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x37] = 0;
  *plVar2 = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  if ((*(byte *)(param_1 + 0x2b) & 1) == 0) {
    if (param_1[0x27] != 0) {
      plVar2 = (long *)param_1[0x26];
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x48))
                  (plVar2,param_1[0x27],"../../../../Include\\SiCore/SiCore_String.inl",0xe1);
      }
      param_1[0x27] = 0;
    }
    param_1[0x27] = 0;
  }
  param_1[0x21] = (long)(PTR_DAT_02714dd8 + 0x10);
  if (param_1[0x25] != 0) {
    plVar2 = param_1 + 0x23;
    do {
      lVar3 = *plVar2;
      if (lVar3 == 0) break;
      lVar4 = *(long *)(lVar3 + 0x20);
      if (lVar4 == 0) {
        *plVar2 = 0;
        param_1[0x24] = 0;
      }
      else {
        *(undefined8 *)(lVar4 + 0x18) = 0;
        *plVar2 = lVar4;
      }
      *(undefined8 *)(lVar3 + 0x18) = 0;
      *(undefined8 *)(lVar3 + 0x20) = 0;
      lVar3 = param_1[0x25];
      param_1[0x25] = lVar3 + -1;
    } while (lVar3 + -1 != 0);
  }
  FUN_005bf750(param_1 + 3);
  *param_1 = (long)(PTR_DAT_02714de0 + 0x10);
  FUN_005bf750(param_1 + 1);
  return;
}


