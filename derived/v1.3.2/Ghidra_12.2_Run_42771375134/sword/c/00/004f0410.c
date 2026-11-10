/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 004f0410; name: FUN_004f0410
 */


/* WARNING: Removing unreachable block (ram,0x004f0460) */
/* WARNING: Removing unreachable block (ram,0x004f0470) */
/* WARNING: Removing unreachable block (ram,0x004f0480) */
/* WARNING: Removing unreachable block (ram,0x004f0488) */
/* WARNING: Removing unreachable block (ram,0x004f04b4) */
/* WARNING: Removing unreachable block (ram,0x004f04bc) */
/* WARNING: Removing unreachable block (ram,0x004f04fc) */
/* WARNING: Removing unreachable block (ram,0x004f04cc) */
/* WARNING: Removing unreachable block (ram,0x004f04d0) */
/* WARNING: Removing unreachable block (ram,0x004f04dc) */
/* WARNING: Removing unreachable block (ram,0x004f04e8) */
/* WARNING: Removing unreachable block (ram,0x004f04f4) */
/* WARNING: Removing unreachable block (ram,0x004f0500) */
/* WARNING: Removing unreachable block (ram,0x004f0504) */
/* WARNING: Removing unreachable block (ram,0x004f0518) */
/* WARNING: Removing unreachable block (ram,0x004f050c) */
/* WARNING: Removing unreachable block (ram,0x004f0520) */
/* WARNING: Removing unreachable block (ram,0x004f0534) */
/* WARNING: Removing unreachable block (ram,0x004f0544) */
/* WARNING: Removing unreachable block (ram,0x004f0554) */
/* WARNING: Removing unreachable block (ram,0x004f058c) */
/* WARNING: Removing unreachable block (ram,0x004f055c) */
/* WARNING: Removing unreachable block (ram,0x004f0560) */
/* WARNING: Removing unreachable block (ram,0x004f056c) */
/* WARNING: Removing unreachable block (ram,0x004f0578) */
/* WARNING: Removing unreachable block (ram,0x004f0584) */
/* WARNING: Removing unreachable block (ram,0x004f0590) */
/* WARNING: Removing unreachable block (ram,0x004f0594) */
/* WARNING: Removing unreachable block (ram,0x004f05a8) */
/* WARNING: Removing unreachable block (ram,0x004f059c) */
/* WARNING: Removing unreachable block (ram,0x004f05b0) */
/* WARNING: Removing unreachable block (ram,0x004f05c4) */
/* WARNING: Removing unreachable block (ram,0x004f05d4) */
/* WARNING: Removing unreachable block (ram,0x004f05e4) */

undefined8 FUN_004f0410(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  uVar3 = FUN_004f06d0();
  if ((uVar3 & 1) == 0) {
    plVar6 = (long *)*param_4;
    if (((int)*plVar6 == 1) && (0 < *(int *)((long)plVar6 + 4))) {
      lVar9 = plVar6[4];
      plVar8 = (long *)(param_1 + 0x18);
      if ((long *)*plVar8 == (long *)0x0) {
        plVar7 = (long *)0x0;
      }
      else {
        plVar7 = (long *)0x0;
        plVar2 = (long *)*plVar8;
        do {
          plVar5 = plVar2;
          if ((plVar5 <= plVar6) && (plVar6 < plVar5 + 0x1ec)) goto LAB_004f0654;
          plVar7 = plVar5;
          plVar2 = (long *)plVar5[0x1ec];
        } while ((long *)plVar5[0x1ec] != (long *)0x0);
      }
      plVar5 = (long *)0x0;
LAB_004f0654:
      if (plVar5[0x1ee] == 0) {
        plVar5[0x1ee] = (long)plVar6;
        *plVar6 = 0;
      }
      else {
        *plVar6 = plVar5[0x1ee];
        plVar5[0x1ee] = (long)plVar6;
      }
      iVar1 = (int)plVar5[0x1ed] + 1;
      *(int *)(plVar5 + 0x1ed) = iVar1;
      if (iVar1 == 0xc) {
        if ((long *)*plVar8 != plVar5) {
          plVar8 = plVar7 + 0x1ec;
        }
        *plVar8 = plVar5[0x1ec];
        FUN_00404870(*(undefined4 *)PTR_DAT_02713640);
      }
      uVar4 = 0;
      *param_4 = lVar9;
    }
    else {
      uVar4 = 0;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}


