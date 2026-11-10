/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00ebb980; name: FUN_00ebb980
 */


void FUN_00ebb980(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  byte *pbVar2;
  long lVar3;
  long *plVar4;
  byte bVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar9 = 0;
  uVar10 = 0;
  local_88 = param_4;
  local_90 = param_3;
  *(undefined8 *)(param_1 + 0x130) = param_3;
  local_80 = param_2;
  do {
    lVar1 = param_1 + lVar9;
    if (*(long *)(lVar1 + 0x140) == 0) {
      pbVar2 = (byte *)(local_80 + lVar9);
      lVar8 = *(long *)(pbVar2 + 8);
      if (lVar8 != 0) {
        bVar5 = *pbVar2;
        puVar6 = &local_90;
        if (pbVar2[0x30] != 0) {
          puVar6 = &local_88;
        }
        plVar4 = (long *)*puVar6;
        if (6 < bVar5) {
                    /* WARNING: Subroutine does not return */
          abort();
        }
        lVar3 = *(long *)PTR_DAT_0271f740 + (ulong)bVar5 * 0x20;
        *(undefined8 *)(lVar3 + 0x10) = plVar4;
        local_78 = (undefined8 *)(lVar3 + 8);
        *(long *)(lVar3 + 0x20) = lVar8;
        plVar7 = (long *)(**(code **)(*plVar4 + 0x10))(plVar4,lVar8,8);
        *(long **)(lVar3 + 0x18) = plVar7;
        if (plVar7 == (long *)0x0) {
          (**(code **)(**(long **)(lVar3 + 0x10) + 0xb8))();
          plVar7 = *(long **)(lVar3 + 0x18);
        }
        FUN_00760770(plVar7,plVar7 + 0x17,lVar8 + -0xb8,0);
        *local_78 = plVar7;
        (**(code **)(*plVar7 + 0xb0))(plVar7,*(undefined8 *)(pbVar2 + 0x18));
        *(byte *)(lVar1 + 0x138) = bVar5;
        *(long **)(lVar1 + 0x140) = plVar7;
        *(long **)(lVar1 + 0x148) = plVar4;
        *(long *)(lVar1 + 0x150) = lVar8;
        FUN_008d4280(&local_70,plVar7);
        *(undefined8 *)(lVar1 + 0x160) = local_70;
        *(undefined8 *)(lVar1 + 0x168) = uStack_68;
      }
    }
    uVar10 = uVar10 + 1;
    lVar9 = lVar9 + 0x38;
    if (6 < uVar10) {
      return;
    }
  } while( true );
}


