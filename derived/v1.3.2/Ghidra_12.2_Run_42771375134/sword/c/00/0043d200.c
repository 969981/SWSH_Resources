/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 0043d200; name: FUN_0043d200
 */


void FUN_0043d200(long *param_1,undefined4 param_2,long param_3,undefined4 param_4)

{
  MutexType *pMVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lStack_90;
  undefined4 local_88 [2];
  long local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined1 local_6c;
  int local_68;
  char local_64;
  undefined8 local_60;
  long *plStack_58;
  
  local_6c = 0;
  local_64 = '\0';
  local_68 = (uint)(param_3 == 0) << 8;
  local_70 = *(byte *)((long)param_1 + 0x36) & 0x1f;
  plStack_58 = param_1 + 7;
  local_60 = 0;
  local_88[0] = param_2;
  local_80 = param_3;
  local_78 = param_4;
  local_74 = FUN_0043e380();
  (**(code **)(*param_1 + 0x70))(param_1,local_88);
  if (local_64 != '\0') {
    lVar7 = *(long *)PTR_DAT_02712ae8;
    pMVar1 = (MutexType *)(lVar7 + 0x1c0);
    nn::os::LockMutex(pMVar1);
    if (*(uint *)(lVar7 + 0x1f0) != 0) {
      puVar6 = (undefined8 *)
               ((long)local_88 + (-8 - ((ulong)*(uint *)(lVar7 + 0x1f0) * 8 + 0xf & 0xffffffff0)));
      if (*(uint *)(lVar7 + 0x1e8) != 0) {
        lVar3 = **(long **)(lVar7 + 0x1e0);
        if (lVar3 == 0) {
          uVar2 = 0;
          do {
            uVar2 = uVar2 + 1;
            if (*(uint *)(lVar7 + 0x1e8) <= uVar2) goto LAB_0043d330;
            lVar3 = (*(long **)(lVar7 + 0x1e0))[uVar2];
          } while (lVar3 == 0);
        }
        else {
          uVar2 = 0;
        }
        lVar8 = 0;
        do {
          uVar4 = (uint)lVar8;
          do {
            uVar4 = uVar4 + 1;
            puVar6[lVar8] = lVar3;
            lVar3 = *(long *)(lVar3 + 8);
            lVar8 = lVar8 + 1;
          } while (lVar3 != 0);
          do {
            uVar2 = uVar2 + 1;
            if (*(uint *)(lVar7 + 0x1e8) <= uVar2) {
              nn::os::UnlockMutex(pMVar1);
              if ((int)lVar8 != 0) {
                uVar5 = (ulong)uVar4;
                do {
                  FUN_0045d370(*puVar6,param_2,param_3);
                  uVar5 = uVar5 - 1;
                  puVar6 = puVar6 + 1;
                } while (uVar5 != 0);
              }
              goto LAB_0043d364;
            }
            lVar3 = *(long *)(*(long *)(lVar7 + 0x1e0) + (ulong)uVar2 * 8);
          } while (lVar3 == 0);
        } while( true );
      }
    }
LAB_0043d330:
    nn::os::UnlockMutex(pMVar1);
  }
LAB_0043d364:
  FUN_004524f0(local_88);
  return;
}


