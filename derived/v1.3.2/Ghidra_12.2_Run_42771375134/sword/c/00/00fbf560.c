/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 00fbf560; name: FUN_00fbf560
 */


/* WARNING: Removing unreachable block (ram,0x00fbf730) */

void FUN_00fbf560(long param_1)

{
  undefined4 uVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined1 uVar5;
  int iVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined4 extraout_var;
  undefined4 local_180;
  undefined4 local_17c;
  int iStack_178;
  int local_174;
  undefined8 local_d0 [6];
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  
  if (*(char *)(param_1 + 0x1c8) != '\0') {
    nn::os::GetSystemTick();
    lVar7 = nn::os::ConvertToTimeSpan();
    uVar11 = lVar7 - *(long *)(param_1 + 0x250);
    uVar10 = ((long)uVar11 >> 0x20) * 0xd7b634db + ((uVar11 & 0xffffffff) * 0xd7b634db >> 0x20);
    if (999 < (((long)uVar11 >> 0x20) * 0x431bde82 + ((long)uVar10 >> 0x20) +
               ((long)((uVar11 & 0xffffffff) * 0x431bde82 + (uVar10 & 0xffffffff)) >> 0x20) >> 0x12)
              - ((long)uVar11 >> 0x3f)) {
      nn::os::GetSystemTick();
      uVar8 = nn::os::ConvertToTimeSpan();
      puVar4 = PTR_DAT_02710798;
      *(undefined8 *)(param_1 + 0x250) = uVar8;
      lVar7 = *(long *)(*(long *)puVar4 + 0x1e8);
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x10))();
      }
      uVar5 = FUN_01524eb0(lVar7);
      *(undefined1 *)(param_1 + 0x1ca) = uVar5;
      *(undefined1 *)(param_1 + 0x1cb) = *(undefined1 *)(lVar7 + 0x140);
      if ((*(long *)(param_1 + 0x1b8) != 0) &&
         (puVar13 = *(undefined8 **)(*(long *)(param_1 + 0x1b8) + 0x60),
         puVar13 != (undefined8 *)0x0)) {
        plVar9 = (long *)(**(code **)*puVar13)(puVar13);
        if (((*PTR_DAT_02715078 & 1) == 0) &&
           (iVar6 = __cxa_guard_acquire(PTR_DAT_02715078), iVar6 != 0)) {
          uVar8 = FUN_00a87090();
          *(undefined8 *)PTR_DAT_02715080 = uVar8;
          __cxa_guard_release(PTR_DAT_02715078);
        }
        for (; plVar9 != (long *)0x0; plVar9 = (long *)*plVar9) {
          if (plVar9 == (long *)PTR_DAT_02715080) {
            *(undefined8 *)(param_1 + 0x1d8) = puVar13[0xd];
            *(undefined8 *)(param_1 + 0x1d0) = puVar13[0xc];
            *(undefined8 *)(param_1 + 0x1e8) = puVar13[0xb];
            *(undefined8 *)(param_1 + 0x1e0) = puVar13[10];
            break;
          }
        }
      }
      lVar14 = *(long *)PTR_DAT_02710958;
      if (lVar14 != 0) {
        if (((*(long *)PTR_DAT_02720700 != 0) && (uVar10 = FUN_012a4260(), (uVar10 & 1) != 0)) &&
           (*(char *)(param_1 + 0x44) != '\0')) {
          local_180 = 0;
          local_17c = FUN_00e7e780();
          iStack_178 = (int)(float)*(undefined8 *)(param_1 + 0x1d0);
          local_174 = (int)(float)*(undefined8 *)(param_1 + 0x1d8);
          FUN_01211840(lVar14,&local_180);
        }
        FUN_007101c0(param_1 + 0x1e0);
        cVar2 = *(char *)(param_1 + 0x1c0);
        *(char *)(param_1 + 0x1c0) = cVar2 + '\x01';
        FUN_012232c0(extraout_var,&local_180,cVar2,*(undefined1 *)(param_1 + 0x1c8),param_1 + 0x1d0)
        ;
        if (*(long *)(param_1 + 0x1f8) == *(long *)(param_1 + 0x200)) {
          *(long *)(param_1 + 0x1f8) = *(long *)(param_1 + 0x1f8) + -0x30;
        }
        FUN_00fbf860(param_1 + 0x1f0,*(undefined8 *)(param_1 + 0x1f0),&local_180);
        FUN_012232b0(local_d0);
        FUN_012232b0(auStack_a0);
        FUN_012232b0(auStack_70);
        puVar13 = *(undefined8 **)(param_1 + 0x1f0);
        lVar3 = *(long *)(param_1 + 0x1f8) - (long)puVar13;
        if (lVar3 != 0) {
          uVar10 = 0;
          puVar12 = local_d0;
          do {
            uVar8 = puVar13[1];
            uVar10 = uVar10 + 1;
            uVar1 = *(undefined4 *)(puVar13 + 4);
            puVar12[3] = puVar13[3];
            puVar12[1] = uVar8;
            *puVar12 = *puVar13;
            uVar8 = puVar13[2];
            *(undefined4 *)(puVar12 + 4) = uVar1;
            puVar12[2] = uVar8;
            puVar12 = puVar12 + 6;
            puVar13 = puVar13 + 6;
          } while (uVar10 < (ulong)((lVar3 >> 4) * -0x5555555555555555));
        }
        FUN_012236e0(&local_180,*(undefined1 *)(param_1 + 0x47),*(undefined1 *)(param_1 + 0x1c9),
                     *(undefined4 *)(param_1 + 0x1c4),*(undefined1 *)(param_1 + 0x1ca),local_d0,
                     *(undefined1 *)(param_1 + 0x1cb));
        FUN_01211270(lVar14,&local_180);
      }
      if (lVar7 != 0) {
        (**(code **)(*(long *)(lVar7 + 0x48) + 0x18))((long *)(lVar7 + 0x48));
      }
    }
  }
  return;
}


