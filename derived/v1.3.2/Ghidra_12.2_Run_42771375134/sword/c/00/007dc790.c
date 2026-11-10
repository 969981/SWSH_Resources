/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 007dc790; name: FUN_007dc790
 */


void FUN_007dc790(void)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long *plVar6;
  
  do {
    if ((DAT_029f5478 == (undefined8 *)0x0) ||
       (plVar6 = (long *)*DAT_029f5478, (long *)DAT_029f5478[1] == plVar6)) {
      return;
    }
    if ((*plVar6 == 0) || (puVar5 = *(undefined8 **)(*plVar6 + 0x60), puVar5 == (undefined8 *)0x0))
    {
LAB_007dc800:
      puVar5 = DAT_029f5478;
      plVar4 = (long *)DAT_029f5478[1];
      plVar1 = plVar6 + 1;
      if (plVar1 != plVar4) {
        plVar1 = plVar6;
        do {
          if (*plVar1 != 0) {
            (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
            *plVar1 = 0;
          }
          plVar6 = plVar1 + 1;
          lVar2 = *plVar6;
          *plVar6 = 0;
          *plVar1 = lVar2;
          plVar1 = plVar6;
        } while (plVar4 + -1 != plVar6);
        plVar1 = (long *)puVar5[1];
        if (plVar1 == plVar6) goto LAB_007dc884;
      }
      do {
        plVar4 = plVar1 + -1;
        if (*plVar4 != 0) {
          (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
          plVar1[-1] = 0;
        }
        plVar1 = plVar4;
      } while (plVar6 != plVar4);
    }
    else {
      plVar1 = (long *)(**(code **)*puVar5)(puVar5);
      lVar2 = FUN_007dd030();
joined_r0x007dc7ec:
      if (plVar1 == (long *)0x0) goto LAB_007dc800;
      if (plVar1 != (long *)lVar2) break;
      uVar3 = *(uint *)(puVar5 + 0x18);
      if (uVar3 != 3) {
        if (uVar3 == 1) {
          if (puVar5[0x15] != 0) {
            if (*(long **)puVar5[0x14] == (long *)0x0) {
              return;
            }
            (**(code **)(**(long **)puVar5[0x14] + 0x38))();
            *(undefined4 *)(puVar5 + 0x18) = 2;
            return;
          }
          *(undefined4 *)(puVar5 + 0x18) = 2;
          (**(code **)(puVar5[-10] + 0x38))(puVar5 + -10);
          uVar3 = *(uint *)(puVar5 + 0x18);
          if (uVar3 == 3) goto LAB_007dc8dc;
        }
        if ((uVar3 | 2) != 6) {
          return;
        }
      }
LAB_007dc8dc:
      puVar5 = DAT_029f5478;
      plVar4 = (long *)DAT_029f5478[1];
      plVar1 = plVar6 + 1;
      if (plVar1 == plVar4) goto LAB_007dc938;
      plVar1 = plVar6;
      do {
        if (*plVar1 != 0) {
          (**(code **)(*(long *)(*plVar1 + 0x48) + 0x18))();
          *plVar1 = 0;
        }
        plVar6 = plVar1 + 1;
        lVar2 = *plVar6;
        *plVar6 = 0;
        *plVar1 = lVar2;
        plVar1 = plVar6;
      } while (plVar4 + -1 != plVar6);
      plVar1 = (long *)puVar5[1];
      if (plVar1 != plVar6) {
LAB_007dc938:
        do {
          plVar4 = plVar1 + -1;
          if (*plVar4 != 0) {
            (**(code **)(*(long *)(*plVar4 + 0x48) + 0x18))();
            plVar1[-1] = 0;
          }
          plVar1 = plVar4;
        } while (plVar6 != plVar4);
      }
    }
LAB_007dc884:
    puVar5[1] = plVar6;
  } while( true );
  plVar1 = (long *)*plVar1;
  goto joined_r0x007dc7ec;
}


