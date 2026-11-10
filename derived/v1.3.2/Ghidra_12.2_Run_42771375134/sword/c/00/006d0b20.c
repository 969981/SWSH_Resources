/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 006d0b20; name: FUN_006d0b20
 */


void FUN_006d0b20(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  size_t sVar6;
  long lVar7;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  
  plVar3 = (long *)param_1[0xc];
  plVar4 = (long *)param_1[0xd];
  puVar1 = PTR_DAT_02715338 + 0x60;
  puVar2 = PTR_DAT_02715338 + 0xa0;
  *param_1 = (long)(PTR_DAT_02715338 + 0x10);
  param_1[9] = (long)puVar1;
  param_1[10] = (long)puVar2;
  for (; plVar3 != plVar4; plVar3 = plVar3 + 1) {
    lVar10 = *plVar3;
    puVar9 = *(undefined8 **)(lVar10 + 0x90);
    puVar5 = *(undefined8 **)(lVar10 + 0x98);
    if (puVar9 != puVar5) {
      if ((long *)*puVar9 != param_1) {
        do {
          puVar9 = puVar9 + 1;
          if (puVar5 == puVar9) goto LAB_006d0bd8;
        } while ((long *)*puVar9 != param_1);
      }
      if (puVar9 != puVar5) {
        sVar6 = (long)puVar5 - (long)(puVar9 + 1);
        if (sVar6 != 0) {
          memmove(puVar9,puVar9 + 1,sVar6);
        }
        *(undefined8 **)(lVar10 + 0x98) = puVar9 + ((long)sVar6 >> 3);
      }
    }
LAB_006d0bd8:
    puVar5 = (undefined8 *)param_1[0x13];
    for (puVar9 = (undefined8 *)param_1[0x12]; puVar9 != puVar5; puVar9 = puVar9 + 1) {
      FUN_006d0f40(*puVar9,lVar10);
    }
  }
  plVar3 = (long *)param_1[0x12];
  plVar4 = (long *)param_1[0x13];
  do {
    if (plVar3 == plVar4) {
      nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x26c));
      lVar10 = param_1[0x46];
      if (lVar10 != 0) {
        lVar7 = param_1[0x47];
        if (param_1[0x47] == lVar10) {
          lVar7 = lVar10;
        }
        else {
          do {
            pcVar8 = *(code **)(lVar7 + -0x78);
            lVar11 = lVar7 + -0x80;
            if (pcVar8 != (code *)0x0) {
              *(undefined8 *)(lVar7 + -0x70) = 0;
              *(undefined8 *)(lVar7 + -0x68) = 0;
              *(undefined8 *)(lVar7 + -0x80) = 0;
              *(undefined8 *)(lVar7 + -0x78) = 0;
              (*pcVar8)(lVar7 + -0x60);
            }
            lVar7 = lVar11;
          } while (lVar10 != lVar11);
          lVar7 = param_1[0x46];
        }
        param_1[0x47] = lVar10;
        (**(code **)(*(long *)param_1[0x49] + 0x18))
                  ((long *)param_1[0x49],lVar7,param_1[0x48] - lVar7,0x10);
      }
      lVar10 = param_1[0x3f];
      if (lVar10 != 0) {
        lVar7 = param_1[0x40];
        if (param_1[0x40] == lVar10) {
          lVar7 = lVar10;
        }
        else {
          do {
            pcVar8 = *(code **)(lVar7 + -0x78);
            lVar11 = lVar7 + -0x80;
            if (pcVar8 != (code *)0x0) {
              *(undefined8 *)(lVar7 + -0x70) = 0;
              *(undefined8 *)(lVar7 + -0x68) = 0;
              *(undefined8 *)(lVar7 + -0x80) = 0;
              *(undefined8 *)(lVar7 + -0x78) = 0;
              (*pcVar8)(lVar7 + -0x60);
            }
            lVar7 = lVar11;
          } while (lVar10 != lVar11);
          lVar7 = param_1[0x3f];
        }
        param_1[0x40] = lVar10;
        (**(code **)(*(long *)param_1[0x42] + 0x18))
                  ((long *)param_1[0x42],lVar7,param_1[0x41] - lVar7,0x10);
      }
      nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x1dc));
      lVar10 = param_1[0x34];
      if (lVar10 != 0) {
        lVar7 = param_1[0x35];
        if (param_1[0x35] == lVar10) {
          lVar7 = lVar10;
        }
        else {
          do {
            pcVar8 = *(code **)(lVar7 + -0x78);
            lVar11 = lVar7 + -0x80;
            if (pcVar8 != (code *)0x0) {
              *(undefined8 *)(lVar7 + -0x70) = 0;
              *(undefined8 *)(lVar7 + -0x68) = 0;
              *(undefined8 *)(lVar7 + -0x80) = 0;
              *(undefined8 *)(lVar7 + -0x78) = 0;
              (*pcVar8)(lVar7 + -0x60);
            }
            lVar7 = lVar11;
          } while (lVar10 != lVar11);
          lVar7 = param_1[0x34];
        }
        param_1[0x35] = lVar10;
        (**(code **)(*(long *)param_1[0x37] + 0x18))
                  ((long *)param_1[0x37],lVar7,param_1[0x36] - lVar7,0x10);
      }
      lVar10 = param_1[0x2d];
      if (lVar10 != 0) {
        lVar7 = param_1[0x2e];
        if (param_1[0x2e] == lVar10) {
          lVar7 = lVar10;
        }
        else {
          do {
            pcVar8 = *(code **)(lVar7 + -0x78);
            lVar11 = lVar7 + -0x80;
            if (pcVar8 != (code *)0x0) {
              *(undefined8 *)(lVar7 + -0x70) = 0;
              *(undefined8 *)(lVar7 + -0x68) = 0;
              *(undefined8 *)(lVar7 + -0x80) = 0;
              *(undefined8 *)(lVar7 + -0x78) = 0;
              (*pcVar8)(lVar7 + -0x60);
            }
            lVar7 = lVar11;
          } while (lVar10 != lVar11);
          lVar7 = param_1[0x2d];
        }
        param_1[0x2e] = lVar10;
        (**(code **)(*(long *)param_1[0x30] + 0x18))
                  ((long *)param_1[0x30],lVar7,param_1[0x2f] - lVar7,0x10);
      }
      nn::os::FinalizeLightEvent((LightEventType *)((long)param_1 + 0x14c));
      if (param_1[0x25] != 0) {
        (**(code **)(*(long *)(param_1[0x25] + 0x48) + 0x18))();
        param_1[0x25] = 0;
      }
      if (param_1[0x24] != 0) {
        (**(code **)(*(long *)(param_1[0x24] + 0x48) + 0x18))();
        param_1[0x24] = 0;
      }
      lVar10 = param_1[0x1e];
      if (lVar10 != 0) {
        param_1[0x1f] = lVar10;
        (**(code **)(*(long *)param_1[0x21] + 0x18))
                  ((long *)param_1[0x21],lVar10,param_1[0x20] - lVar10,8);
      }
      lVar10 = param_1[0x18];
      if (lVar10 != 0) {
        param_1[0x19] = lVar10;
        (**(code **)(*(long *)param_1[0x1b] + 0x18))
                  ((long *)param_1[0x1b],lVar10,param_1[0x1a] - lVar10,8);
      }
      lVar10 = param_1[0x12];
      if (lVar10 != 0) {
        param_1[0x13] = lVar10;
        (**(code **)(*(long *)param_1[0x15] + 0x18))
                  ((long *)param_1[0x15],lVar10,param_1[0x14] - lVar10,8);
      }
      lVar10 = param_1[0xc];
      if (lVar10 != 0) {
        param_1[0xd] = lVar10;
        (**(code **)(*(long *)param_1[0xf] + 0x18))
                  ((long *)param_1[0xf],lVar10,param_1[0xe] - lVar10,8);
      }
      puVar1 = PTR_DAT_027152a8 + 0x50;
      puVar2 = PTR_DAT_027152a8 + 0x90;
      *param_1 = (long)(PTR_DAT_027152a8 + 0x10);
      param_1[9] = (long)puVar1;
      param_1[10] = (long)puVar2;
      if (param_1[0xb] != 0) {
        (**(code **)(*(long *)(param_1[0xb] + 0x48) + 0x18))();
        param_1[0xb] = 0;
      }
      return;
    }
    lVar10 = *plVar3;
    puVar9 = *(undefined8 **)(lVar10 + 0x60);
    puVar5 = *(undefined8 **)(lVar10 + 0x68);
    if (puVar9 != puVar5) {
      if ((long *)*puVar9 != param_1) {
        do {
          puVar9 = puVar9 + 1;
          if (puVar5 == puVar9) goto LAB_006d0c0c;
        } while ((long *)*puVar9 != param_1);
      }
      if (puVar9 != puVar5) {
        sVar6 = (long)puVar5 - (long)(puVar9 + 1);
        if (sVar6 != 0) {
          memmove(puVar9,puVar9 + 1,sVar6);
        }
        *(undefined8 **)(lVar10 + 0x68) = puVar9 + ((long)sVar6 >> 3);
      }
    }
LAB_006d0c0c:
    plVar3 = plVar3 + 1;
  } while( true );
}


