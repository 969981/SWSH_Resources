/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SWSH v1.3.2 original ELF SHA256: 4eaf6667a06d385db243b11f99207bbd3be293d58bfc6d55a355691333c81f43
 * Ghidra function entry: 008fb640; name: FUN_008fb640
 */


bool FUN_008fb640(long param_1)

{
  long *plVar1;
  long *plVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long local_60;
  long local_58;
  long local_50;
  long local_48;
  long local_40;
  long local_38;
  long local_28;
  
  uVar4 = FUN_008f0810(*(undefined4 *)(param_1 + 0x150),
                       *(undefined1 *)(*(long *)(param_1 + 0x88) + 0x3b9),
                       *(undefined1 *)(param_1 + 0x174),0);
  param_1 = param_1 + (ulong)(uVar4 & 0xff) * 0x70;
  lVar6 = *(long *)(param_1 + 0x238);
  lVar5 = *(long *)(param_1 + 0x250);
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x10))();
  }
  FUN_0010d170(&local_28,"ee501");
  plVar2 = (long *)PTR_DAT_02710920;
  plVar1 = (long *)PTR_DAT_02710920;
  if (local_28 != 0) {
    plVar1 = (long *)(local_28 + 0x58);
  }
  if (lVar6 == *plVar1) {
    bVar3 = true;
    lVar6 = local_38;
  }
  else {
    FUN_0010d170(&local_38,"ee510");
    plVar1 = plVar2;
    if (local_38 != 0) {
      plVar1 = (long *)(local_38 + 0x58);
    }
    if (lVar6 == *plVar1) {
      bVar3 = true;
      lVar6 = local_40;
    }
    else {
      FUN_0010d170(&local_40,"ee512");
      plVar1 = plVar2;
      if (local_40 != 0) {
        plVar1 = (long *)(local_40 + 0x58);
      }
      if (lVar6 == *plVar1) {
        bVar3 = true;
        lVar6 = local_48;
      }
      else {
        FUN_0010d170(&local_48,"ee531");
        plVar1 = plVar2;
        if (local_48 != 0) {
          plVar1 = (long *)(local_48 + 0x58);
        }
        if (lVar6 == *plVar1) {
          bVar3 = true;
          lVar6 = local_50;
        }
        else {
          FUN_0010d170(&local_50,"ee533");
          plVar1 = plVar2;
          if (local_50 != 0) {
            plVar1 = (long *)(local_50 + 0x58);
          }
          if (lVar6 == *plVar1) {
            bVar3 = true;
            lVar6 = local_58;
          }
          else {
            FUN_0010d170(&local_58,"ee534");
            plVar1 = plVar2;
            if (local_58 != 0) {
              plVar1 = (long *)(local_58 + 0x58);
            }
            if (lVar6 == *plVar1) {
              bVar3 = true;
              lVar6 = local_60;
            }
            else {
              FUN_0010d170(&local_60,"ee535");
              if (local_60 != 0) {
                plVar2 = (long *)(local_60 + 0x58);
              }
              bVar3 = lVar6 == *plVar2;
              lVar6 = 0;
              if (local_60 != 0) {
                (**(code **)(*(long *)(local_60 + 0x48) + 0x18))();
                local_60 = 0;
                lVar6 = local_60;
              }
            }
            local_60 = lVar6;
            lVar6 = 0;
            if (local_58 != 0) {
              (**(code **)(*(long *)(local_58 + 0x48) + 0x18))();
              local_58 = 0;
              lVar6 = local_58;
            }
          }
          local_58 = lVar6;
          lVar6 = 0;
          if (local_50 != 0) {
            (**(code **)(*(long *)(local_50 + 0x48) + 0x18))();
            local_50 = 0;
            lVar6 = local_50;
          }
        }
        local_50 = lVar6;
        lVar6 = 0;
        if (local_48 != 0) {
          (**(code **)(*(long *)(local_48 + 0x48) + 0x18))();
          local_48 = 0;
          lVar6 = local_48;
        }
      }
      local_48 = lVar6;
      lVar6 = 0;
      if (local_40 != 0) {
        (**(code **)(*(long *)(local_40 + 0x48) + 0x18))();
        local_40 = 0;
        lVar6 = local_40;
      }
    }
    local_40 = lVar6;
    lVar6 = 0;
    if (local_38 != 0) {
      (**(code **)(*(long *)(local_38 + 0x48) + 0x18))();
      local_38 = 0;
      lVar6 = local_38;
    }
  }
  local_38 = lVar6;
  if (local_28 != 0) {
    (**(code **)(*(long *)(local_28 + 0x48) + 0x18))();
    local_28 = 0;
  }
  if (lVar5 != 0) {
    (**(code **)(*(long *)(lVar5 + 0x48) + 0x18))((long *)(lVar5 + 0x48));
  }
  return bVar3;
}


