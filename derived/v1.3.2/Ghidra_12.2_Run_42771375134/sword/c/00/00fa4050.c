/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fa4050; name: FUN_00fa4050
 */


void FUN_00fa4050(ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  
  lVar7 = *(long *)PTR_DAT_027194d8;
  if ((param_1 & 1) != 0) {
    plVar8 = *(long **)(lVar7 + 0xb0);
    plVar1 = *(long **)(lVar7 + 0xb8);
    if (plVar8 != plVar1) {
      do {
        if (((*(byte *)(*plVar8 + 0x38e) >> 4 & 1) != 0) &&
           (uVar2 = (**(code **)(*(long *)*plVar8 + 0x88))(), (uVar2 & 1) == 0)) {
          lVar5 = *plVar8;
          puVar6 = (undefined8 *)(lVar5 + 0x50);
          plVar3 = (long *)(**(code **)*puVar6)(puVar6);
          lVar4 = FUN_00e2efa0();
          for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if (plVar3 == (long *)lVar4) {
              FUN_00eaf670(lVar5);
              break;
            }
          }
        }
        plVar8 = plVar8 + 1;
      } while (plVar8 != plVar1);
      plVar1 = *(long **)(lVar7 + 0xb8);
      for (plVar8 = *(long **)(lVar7 + 0xb0); plVar8 != plVar1; plVar8 = plVar8 + 1) {
        if (((*(byte *)(*plVar8 + 0x38e) >> 5 & 1) != 0) &&
           (uVar2 = (**(code **)(*(long *)*plVar8 + 0x88))(), (uVar2 & 1) == 0)) {
          lVar5 = *plVar8;
          plVar3 = (long *)(*(code *)**(undefined8 **)(lVar5 + 0x50))((undefined8 *)(lVar5 + 0x50));
          lVar4 = FUN_01590c90();
          for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
            if (plVar3 == (long *)lVar4) {
              uVar2 = FUN_00dc5950(lVar5 + 0x3b0);
              if ((uVar2 & 1) != 0) {
                FUN_00e5cb20(lVar5);
              }
              break;
            }
          }
        }
      }
    }
  }
  plVar8 = *(long **)(lVar7 + 0xb0);
  plVar1 = *(long **)(lVar7 + 0xb8);
  do {
    if (plVar8 == plVar1) {
      return;
    }
    if (((*(byte *)(*plVar8 + 0x38e) >> 3 & 1) != 0) &&
       (uVar2 = (**(code **)(*(long *)*plVar8 + 0x88))(), (uVar2 & 1) == 0)) {
      lVar4 = *plVar8;
      puVar6 = (undefined8 *)(lVar4 + 0x50);
      plVar3 = (long *)(**(code **)*puVar6)(puVar6);
      lVar7 = FUN_0156b630();
      for (; plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
        if (plVar3 == (long *)lVar7) {
          FUN_00e60120(lVar4,1);
          break;
        }
      }
    }
    plVar8 = plVar8 + 1;
  } while( true );
}


