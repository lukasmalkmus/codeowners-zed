use zed_extension_api::{self as zed};

struct CodeownersExtension;

impl zed::Extension for CodeownersExtension {
    fn new() -> Self {
        Self
    }
}

zed::register_extension!(CodeownersExtension);
