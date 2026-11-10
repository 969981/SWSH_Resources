/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 01034430; name: FUN_01034430
 */


void FUN_01034430(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  PlayReport aPStack_78 [56];
  
  plVar5 = (long *)param_1[5];
  if (plVar5 != (long *)0x0) {
    plVar3 = (long *)*param_1;
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,0x4000,8);
    nn::prepo::PlayReport::PlayReport(aPStack_78,(char *)(param_1 + 1));
    nn::prepo::PlayReport::SetBuffer(aPStack_78,uVar2);
    if (*plVar5 != plVar5[1]) {
      lVar4 = *plVar5 + 0x51;
      do {
        if (*(char *)(lVar4 + -0x11) == '\0') {
          if (*(char *)(lVar4 + -1) != '\0') {
            nn::prepo::PlayReport::Add((char *)aPStack_78,(char *)(lVar4 + -0x51));
          }
        }
        else {
          nn::prepo::PlayReport::Add((char *)aPStack_78,lVar4 + -0x51);
        }
        lVar1 = lVar4 + 0x47;
        lVar4 = lVar4 + 0x98;
      } while (lVar1 != plVar5[1]);
    }
    plVar5 = (long *)param_1[9];
    if ((plVar5 != (long *)0x0) && (*plVar5 != plVar5[1])) {
      lVar4 = *plVar5 + 0x51;
      do {
        if (*(char *)(lVar4 + -0x11) == '\0') {
          if (*(char *)(lVar4 + -1) != '\0') {
            nn::prepo::PlayReport::Add((char *)aPStack_78,(char *)(lVar4 + -0x51));
          }
        }
        else {
          nn::prepo::PlayReport::Add((char *)aPStack_78,lVar4 + -0x51);
        }
        lVar1 = lVar4 + 0x47;
        lVar4 = lVar4 + 0x98;
      } while (lVar1 != plVar5[1]);
    }
    FUN_01025b70(*(undefined8 *)PTR_DAT_02710878);
    nn::prepo::PlayReport::Save((Uid *)aPStack_78);
    nn::prepo::PlayReport::Clear();
    if (uVar2 != 0) {
      (**(code **)(*plVar3 + 0x18))(plVar3,uVar2,0x4000,8);
    }
  }
  return;
}


