/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0066da00; name: FUN_0066da00
 */


void FUN_0066da00(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  undefined1 auStack_70 [16];
  
  *param_1 = (long)(PTR_DAT_02714cf8 + 0x10);
  FUN_006966f0(auStack_70,param_1 + 3,1);
  puVar3 = PTR_DAT_02714328;
  plVar8 = param_1 + 0xb;
  lVar5 = *plVar8;
  if (lVar5 != 0) {
    puVar1 = PTR_DAT_02714328 + 0x10;
    do {
      lVar6 = *(long *)(param_1[0xc] + 0x20);
      if ((lVar6 != 0) && (plVar7 = (long *)param_1[10], plVar7 != (long *)0x0)) {
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
                   "../../../../Libsrc/SiGfx/Source\\ShaderEffect/SiGfx_ShaderEffect_Impl.h",0x224);
        lVar5 = *plVar8;
      }
    } while (lVar5 != 0);
  }
  FUN_00696730(auStack_70);
  param_1[9] = (long)(PTR_DAT_02714d00 + 0x10);
  if ((param_1[10] != 0) && (lVar5 = param_1[0xc], lVar5 != 0)) {
    FUN_0066dd60(param_1[10],lVar5,"../../../../Include\\SiCore/SiCore_Map.h",0x3b7);
    param_1[0xc] = 0;
  }
  *plVar8 = 0;
  param_1[0xc] = 0;
  FUN_00696510(param_1 + 3);
  FUN_005bf750(param_1 + 1);
  return;
}


